/*
 * Name:      ccGui.cpp
 * Purpose:   User interface classes implementation for ColorCoder
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#include <editormanager.h>
#include "ccGui.h"


/*
 * ColorCoderDialog :: ColorCoderDialog (ctor)
 */

ColorCoderDialog::ColorCoderDialog( ColorCoderValues* ccv, wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style )
: ColorCoderUI( parent, id, title, pos, size, style )
{
	val = ccv;

	// color for the picker
	selectPicker->SetColour( val->selectPicker );

	// prefix styles
	stylePlain->SetValue( val->stylePlain );
	styleRGB->SetValue( val->styleRGB );
	styleHTML->SetValue( val->styleHTML );
	styleOpenGL->SetValue( val->styleOpenGL );
	styleWxWidgets->SetValue( val->styleWxWidgets );

	// data types
	typeInteger->SetValue( val->typeInteger );
	typeHex->SetValue( val->typeHex );
	typeFloat->SetValue( val->typeFloat );

	// other values
	delimiters->SetSelection( val->delimiters );
	numDecimals->SetValue( val->numDecimals );
	numAlpha->SetValue( val->numAlpha );

	// check-boxes for options
	optionDSpaces->SetValue( val->optionDSpaces );
	optionVSpaces->SetValue( val->optionVSpaces );
	optionSuffix->SetValue( val->optionSuffix );
	optionUppercase->SetValue( val->optionUppercase );
	optionAlpha->SetValue( val->optionAlpha );

	// user interface layout
	optionRemember->SetValue( val->optionRemember );
	optionInsertAndClose->SetValue( val->optionInsertAndClose );

	// entries for the wxChoice and initial color selected
	for (int i = 0; i < htmlColors.GetCount(); i++ )
		selectName->Append( htmlColors.Item( i, NAME ) );

	wxString current = htmlColors.GetName( selectPicker->GetColour().GetAsString( wxC2S_HTML_SYNTAX ) );
	if ( current != wxEmptyString )
	{
		selectName->SetStringSelection( current );
		selectName->SetFirstItem( current );
	}
	else
		selectName->SetStringSelection( wxT("--- custom color ---") );

	this->update_enabled_controls();
	outputPreview->ChangeValue( val->update_output() );
	buttonInsert->Enable( Manager::Get()->GetEditorManager()->GetEditorsCount() );

}


/*
 * ColorCoderDialog :: ~ColorCoderDialog (dtor)
 */

ColorCoderDialog::~ColorCoderDialog()
{
}


/*
 * ColorCoderDialog :: changeLayout_clicked
 */

void ColorCoderDialog::changeLayout_clicked( wxCommandEvent& WXUNUSED( event ) )
{
	val->change_layout ( this );
}


/*
 * ColorCoderDialog :: buttonInsert_clicked
 */

void ColorCoderDialog::buttonInsert_clicked( wxCommandEvent& WXUNUSED( event ) )
{
	val->insert_output( this );
}


/*
 * ColorCoderDialog :: selectPicker_changed
 */

void ColorCoderDialog::selectPicker_changed( wxColourPickerEvent& event )
{
	wxString current = htmlColors.GetName( event.GetColour().GetAsString( wxC2S_HTML_SYNTAX ) );
	if ( current != wxEmptyString )
	{
		selectName->SetStringSelection( current );
		selectName->SetFirstItem( current );
	}
	else
		selectName->SetStringSelection( wxT("--- custom color ---") );

	val->selectPicker = event.GetColour();
	outputPreview->ChangeValue( val->update_output() );
}


/*
 * ColorCoderDialog :: selectName_changed
 */

void ColorCoderDialog::selectName_changed( wxCommandEvent& WXUNUSED( event ) )
{
	wxString current = selectName->GetStringSelection();
	if ( current != wxT("--- custom color ---") )
	{
		selectPicker->SetColour( htmlColors.GetCode( current ) );
		val->selectPicker = selectPicker->GetColour();
		outputPreview->ChangeValue( val->update_output() );
	}
}


/*
 * ColorCoderDialog :: control_clicked
 */

void ColorCoderDialog::control_clicked( wxCommandEvent& WXUNUSED(event) )
{
	// color for the picker
	val->selectPicker = selectPicker->GetColour();

	// prefices styles
	val->stylePlain = stylePlain->GetValue();
	val->styleRGB = styleRGB->GetValue();
	val->styleHTML = styleHTML->GetValue();
	val->styleOpenGL = styleOpenGL->GetValue();
	val->styleWxWidgets = styleWxWidgets->GetValue();

	// data types
	val->typeInteger = typeInteger->GetValue();
	val->typeHex = typeHex->GetValue();
	val->typeFloat = typeFloat->GetValue();

	// other values
	val->delimiters = delimiters->GetSelection();
	val->numDecimals = numDecimals->GetValue();
	val->numAlpha = numAlpha->GetValue();

	// check-boxes for options
	val->optionDSpaces = optionDSpaces->IsChecked();
	val->optionVSpaces = optionVSpaces->IsChecked();
	val->optionSuffix = optionSuffix->IsChecked();
	val->optionUppercase = optionUppercase->IsChecked();
	val->optionAlpha = optionAlpha->IsChecked();

	// user interface layout
	val->optionRemember = optionRemember->IsChecked();
	val->optionInsertAndClose = optionInsertAndClose->IsChecked();

	update_enabled_controls();
	outputPreview->ChangeValue( val->update_output() );
}


/*
 * ColorCoderDialog :: update_enabled_controls
 */

void ColorCoderDialog::update_enabled_controls( void )
{
	bool SH = val->styleHTML;
	bool SP = val->stylePlain;
	bool SO = val->styleOpenGL;
	bool SW = val->styleWxWidgets;

	delimiters->Enable( SP );

	typeHex->Enable( SP || SO );
	typeFloat->Enable( SP || SO );
	typeInteger->Enable( SP || SO );

	numDecimals->Enable( ( SP || SO ) && val->typeFloat );
	labelDecimals->Enable( numDecimals->IsEnabled() );

	optionDSpaces->Enable( !( SP && ( val->delimiters == NONE ) ) && !SH );
	optionVSpaces->Enable( !SH );
	optionSuffix->Enable( ( SP || SO ) && !val->typeHex );
	optionUppercase->Enable( ( ( SP || SO ) && val->typeHex ) || SW || SH );
	optionAlpha->Enable( SO || SW );

	numAlpha->Enable( ( SO || SW ) && val->optionAlpha );
	labelAlpha->Enable( numAlpha->IsEnabled() );
}


/*
 * ColorCoderDialogTiny :: ColorCoderDialogTiny (ctor)
 */

ColorCoderDialogTiny::ColorCoderDialogTiny( ColorCoderValues* ccv, wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style )
: ColorCoderUITiny( parent, id, title, pos, size, style )
{
	val = ccv;
	selectPicker->SetColour( val->selectPicker );
	buttonInsert->Enable( Manager::Get()->GetEditorManager()->GetEditorsCount() );
}


/*
 * ColorCoderDialogTiny :: ~ColorCoderDialogTiny (dtor)
 */

ColorCoderDialogTiny::~ColorCoderDialogTiny()
{
}


/*
 * ColorCoderDialogTiny :: changeLayout_clicked
 */

void ColorCoderDialogTiny::changeLayout_clicked( wxCommandEvent& WXUNUSED( event ) )
{
	val->change_layout( this );
}


/*
 * ColorCoderDialogTiny :: selectPicker_changed
 */

void ColorCoderDialogTiny::selectPicker_changed( wxColourPickerEvent& event )
{
	val->selectPicker = event.GetColour();
 	val->update_output();
}


/*
 * ColorCoderDialogTiny :: buttonInsert_clicked
 */

void ColorCoderDialogTiny::buttonInsert_clicked( wxCommandEvent& WXUNUSED( event ) )
{
	val->insert_output( this );
}


/*
 * End of file  (ccGui.cpp)
 */
