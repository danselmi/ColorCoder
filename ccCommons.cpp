/*
 * Name:      ccCommons.cpp
 * Purpose:   Implementation for procedures used in other ColorCoder classes
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#include <wx/dataobj.h>
#include <wx/clipbrd.h>

#include <editorbase.h>
#include <editormanager.h>
#include <configmanager.h>

#include "ccGui.h"
#include "ccCommons.h"


/*
 * ColorCoderValues :: read_config
 */

void ColorCoderValues :: read_config( void )
{
	ConfigManager* cfg = Manager::Get()->GetConfigManager( _T("ColorCoder") );

	// color for the picker
	selectPicker = cfg->ReadColour( _T("/col_picker"), wxColour(127,255,0) );

	// prefix styles
	stylePlain = cfg->ReadBool( _T("/sty_plain"), false );
	styleRGB = cfg->ReadBool( _T("/sty_rgb"), false );
	styleHTML = cfg->ReadBool( _T("/sty_html"), false );
	styleOpenGL = cfg->ReadBool( _T("/sty_opengl"), false );
	styleWxWidgets = cfg->ReadBool( _T("/sty_wxwidgets"), true );

	// data types
	typeInteger = cfg->ReadBool( _T("/typ_integer"), false );
	typeHex = cfg->ReadBool( _T("/typ_hex"), false );
	typeFloat = cfg->ReadBool( _T("/typ_float"), true );

	// other values
	delimiters = cfg->ReadInt( _T("/delimiters"), 4 );
	numDecimals = cfg->ReadInt( _T("/num_decimals"), 3 );
	numAlpha = cfg->ReadInt( _T("/num_alpha"), 0 );

	// check-boxes for options
	optionDSpaces = cfg->ReadBool( _T("/opt_dspaces"), true );
	optionVSpaces = cfg->ReadBool( _T("/opt_vspaces"), true );
	optionSuffix = cfg->ReadBool( _T("/opt_suffix"), false );
	optionUppercase = cfg->ReadBool( _T("/opt_uppercase"), false );
	optionAlpha = cfg->ReadBool( _T("/opt_alpha"), false );

	// user interface layout
	optionRemember = cfg->ReadBool( _T("/opt_remember"), true );
	optionInsertAndClose = cfg->ReadBool( _T("/opt_insandclose"), true );
	layoutTiny = cfg->ReadBool( _T("/lay_tiny"), true );
}


/*
 * ColorCoderValues :: write_config
 */

void ColorCoderValues :: write_config( void )
{
	ConfigManager* cfg = Manager::Get()->GetConfigManager( _T("ColorCoder") );

	// color for the picker
	cfg->Write( _T("/col_picker"), selectPicker );

	// prefix styles
	cfg->Write( _T("/sty_plain"), (bool)stylePlain );
	cfg->Write( _T("/sty_rgb"), (bool)styleRGB );
	cfg->Write( _T("/sty_html"), (bool)styleHTML );
	cfg->Write( _T("/sty_opengl"), (bool)styleOpenGL );
	cfg->Write( _T("/sty_wxwidgets"), (bool)styleWxWidgets );

	// data types
	cfg->Write( _T("/typ_integer"), (bool)typeInteger );
	cfg->Write( _T("/typ_hex"), (bool)typeHex );
	cfg->Write( _T("/typ_float"), (bool)typeFloat );

	// other specific values
	cfg->Write( _T("/delimiters"), (int)delimiters );
	cfg->Write( _T("/num_decimals"), (int)numDecimals );
	cfg->Write( _T("/num_alpha"), (int)numAlpha );

	// check-boxes for other options
	cfg->Write( _T("/opt_dspaces"), (bool)optionDSpaces );
	cfg->Write( _T("/opt_vspaces"), (bool)optionVSpaces );
	cfg->Write( _T("/opt_suffix"), (bool)optionSuffix );
	cfg->Write( _T("/opt_uppercase"), (bool)optionUppercase );
	cfg->Write( _T("/opt_alpha"), (bool)optionAlpha );

	// user interface layout
	cfg->Write( _T("/opt_remember"), (bool)optionRemember );
	cfg->Write( _T("/opt_insandclose"), (bool)optionInsertAndClose );
	cfg->Write( _T("/lay_tiny"), (bool)layoutTiny );
}


/*
 * ColorCoderValues :: change_layout
 */

void ColorCoderValues :: change_layout( wxWindow* current )
{
	layoutTiny = !layoutTiny;

	if ( layoutTiny )
	{
		ColorCoderDialogTiny* ChangeToTiny;
		ChangeToTiny = new ColorCoderDialogTiny( this, Manager::Get()->GetAppWindow(), wxID_ANY, wxT("ColorCoder"), current->GetScreenPosition() );
		ChangeToTiny->Show();
	}
	else
	{
		ColorCoderDialog* ChangeToExtended;
		ChangeToExtended = new ColorCoderDialog( this, Manager::Get()->GetAppWindow(), wxID_ANY, wxT("ColorCoder"), current->GetScreenPosition() );
		ChangeToExtended->Show();
	}
	current->Destroy();
}


/*
 * ColorCoderValues :: insert_output
 */

void ColorCoderValues :: insert_output( wxWindow* current )
{
	// Write output string to the clipboard
	if ( wxTheClipboard->Open() )
	{
		wxTheClipboard->SetData( new wxTextDataObject( output ) );
		wxTheClipboard->Close();
	}
	else

		wxMessageBox(
			_("ColorCoder can't copy to the Clipboard!"),
			_("Error"),
			wxOK|wxICON_ERROR, current );

	if ( Manager::Get()->GetEditorManager()->GetEditorsCount() )
		Manager::Get()->GetEditorManager()->GetActiveEditor()->Paste();

	if ( optionRemember ) write_config();
	if ( optionInsertAndClose ) current->Destroy();
}


/*
 * ColorCoderValues :: update_output
 */

wxString ColorCoderValues :: update_output()
{
	float fA = ( 100 - numAlpha )/100.0;
	int iA = (int)( 255 * fA );

  	iR = selectPicker.Red();
	iG = selectPicker.Green();
	iB = selectPicker.Blue();

	bool canUpper = false;
	bool canAlpha = false;

	wxString cadena, delim_in, delim_out, separator, DSpace, VSpace, unit, sR, sG, sB, sA;
	cadena  = delim_in = delim_out = separator = DSpace = VSpace = unit = sR = sG = sB = sA = wxT( "" );

	if ( !styleHTML ) // common options for the styles except HTML
	{
		separator = wxT( "," );
		delim_out = wxT( ")" ); // note: plain style considers his own delimiters

		if ( optionDSpaces ) DSpace = wxT( " " );
		if ( optionVSpaces ) VSpace = wxT( " " );
	}

	if ( styleHTML ) // prefix and format for HTML style
	{
		delim_in = wxT( "#" );
		canUpper = true;

		sR.Printf( wxT( "%.2x" ), iR );
		sG.Printf( wxT( "%.2x" ), iG );
		sB.Printf( wxT( "%.2x" ), iB );
	}

	else if ( styleRGB ) // prefix and format for RGB style
	{
		delim_in  = wxT( "rgb(" );

		sR.Printf( wxT( "%.3d" ), iR );
		sG.Printf( wxT( "%.3d" ), iG );
		sB.Printf( wxT( "%.3d" ), iB );
	}

	else if ( styleWxWidgets ) // prefix and format for wxWidgets style
	{
		delim_in  = wxT( "wxColour(" );
		canAlpha = true;
		canUpper = true;

		sR.Printf( wxT( "0x%.2x" ), iR );
		sG.Printf( wxT( "0x%.2x" ), iG );
		sB.Printf( wxT( "0x%.2x" ), iB );
		sA.Printf( wxT( "0x%.2x" ), iA );
	}

	else if ( styleOpenGL ) // prefixes for OpenGL style (format below)
	{
		wxString GLprefix = wxT("glColor"), GLnum = wxT("3"), GLtype = wxT("i");

		if ( typeHex )      GLtype = wxT("b");
		if ( typeFloat )    GLtype = wxT("f");
		if ( optionAlpha )  GLnum  = wxT("4");

		delim_in << GLprefix << GLnum << GLtype << wxT("(");
		canAlpha = true;
	}

	else if ( stylePlain ) // delimiters for plain style (format below)
	{
		switch ( delimiters )
		{
			case QUOTES:		delim_in  = wxT("\""); delim_out = wxT("\""); break;
			case PARENTHESIS:	delim_in  = wxT("("); delim_out = wxT(")"); break;
			case BRACKETS:		delim_in  = wxT("["); delim_out = wxT("]"); break;
			case BRACES:		delim_in  = wxT("{"); delim_out = wxT("}"); break;
			case NONE:			delim_in = delim_out = DSpace = wxT( "" ); break;
			default: break;
		}
	}

	if ( stylePlain || styleOpenGL ) // format for plain and OpenGL styles
	{
		if ( typeInteger )
		{
			if ( optionSuffix ) unit = wxT( "i" );

			sR.Printf( wxT( "%d" ), iR );
			sG.Printf( wxT( "%d" ), iG );
			sB.Printf( wxT( "%d" ), iB );
			sA.Printf( wxT( "%d" ), iA );
		}

		else if ( typeHex )
		{
			canUpper = true;

			sR.Printf( wxT( "0x%.2x" ), iR );
			sG.Printf( wxT( "0x%.2x" ), iG );
			sB.Printf( wxT( "0x%.2x" ), iB );
			sA.Printf( wxT( "0x%.2x" ), iA );
		}

		else // typeFloat
		{
			if ( optionSuffix ) unit = wxT( "f" );

			float rnd = 0.5;
			int decs = numDecimals;
			for ( int d = 0; d < decs; d++) rnd /= 10.0;

			sR.Printf( wxT("%#.8f"), rnd + iR/255.0 ); sR.Truncate( 2 + decs ).SetChar(1,'.');
			sG.Printf( wxT("%#.8f"), rnd + iG/255.0 ); sG.Truncate( 2 + decs ).SetChar(1,'.');
			sB.Printf( wxT("%#.8f"), rnd + iB/255.0 ); sB.Truncate( 2 + decs ).SetChar(1,'.');
			sA.Printf( wxT("%#.8f"), rnd + fA );       sA.Truncate( 2 + decs ).SetChar(1,'.');
		}
	}

	cadena	<< DSpace << sR << unit << separator
			<< VSpace << sG << unit << separator
			<< VSpace << sB << unit;

	if ( canAlpha && optionAlpha )
		cadena << separator << VSpace << sA << unit;

	cadena << DSpace << delim_out;

	if ( canUpper && optionUppercase ) cadena.MakeUpper();
	else cadena.MakeLower();

	cadena.Prepend( delim_in ); // inserted here to not convert prefix to upper-lower case
	return ( output = cadena );
}


/*
 * End of file  (ccCommons.cpp)
 */
