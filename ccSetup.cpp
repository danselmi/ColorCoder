/*
 * Name:      ccSetup.cpp
 * Purpose:   Configuration class implementation for ColorCoder
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#include "ccSetup.h"


/*
 * ColorCoderSetup :: ColorCoderSetup (ctor)
 */

ColorCoderSetup::ColorCoderSetup( wxWindow* parent )
{
	Create( parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxPanel") );

	UI = new ColorCoderCFG( this );

	wxBoxSizer* cfgSizer = new wxBoxSizer( wxVERTICAL );
	cfgSizer->Add( UI, 5, wxEXPAND, 5 );
	this->SetSizer( cfgSizer );
	this->Layout();

	val = new ColorCoderValues();
	val->read_config();

	// color for the picker
	UI->selectPicker->SetColour( val->selectPicker );

	// prefix styles
	UI->stylePlain->SetValue( val->stylePlain );
	UI->styleRGB->SetValue( val->styleRGB );
	UI->styleHTML->SetValue( val->styleHTML );
	UI->styleOpenGL->SetValue( val->styleOpenGL );
	UI->styleWxWidgets->SetValue( val->styleWxWidgets );

	// data types
	UI->typeInteger->SetValue( val->typeInteger );
	UI->typeHex->SetValue( val->typeHex );
	UI->typeFloat->SetValue( val->typeFloat );

	// other values
	UI->delimiters->SetSelection( val->delimiters );
	UI->numDecimals->SetValue( val->numDecimals );
	UI->numAlpha->SetValue( val->numAlpha );

	// check-boxes for options
	UI->optionDSpaces->SetValue( val->optionDSpaces );
	UI->optionVSpaces->SetValue( val->optionVSpaces );
	UI->optionSuffix->SetValue( val->optionSuffix );
	UI->optionUppercase->SetValue( val->optionUppercase );
	UI->optionAlpha->SetValue( val->optionAlpha );

	// user interface layout
	UI->optionRemember->SetValue( val->optionRemember );
	UI->optionInsertAndClose->SetValue( val->optionInsertAndClose );
	UI->layoutTiny->SetValue( val->layoutTiny  );
	UI->layoutExtended->SetValue( !val->layoutTiny );
}


/*
 * ColorCoderSetup :: OnApply
 */

void ColorCoderSetup::OnApply()
{
	// color for the picker
	val->selectPicker = UI->selectPicker->GetColour();

	// prefix styles
	val->stylePlain = UI->stylePlain->GetValue();
	val->styleRGB = UI->styleRGB->GetValue();
	val->styleHTML = UI->styleHTML->GetValue();
	val->styleOpenGL = UI->styleOpenGL->GetValue();
	val->styleWxWidgets = UI->styleWxWidgets->GetValue();

	// data types
	val->typeInteger = UI->typeInteger->GetValue();
	val->typeHex = UI->typeHex->GetValue();
	val->typeFloat = UI->typeFloat->GetValue();

	// other values
	val->delimiters = UI->delimiters->GetSelection();
	val->numDecimals = UI->numDecimals->GetValue();
	val->numAlpha = UI->numAlpha->GetValue();

	// check-boxes for options
	val->optionDSpaces = UI->optionDSpaces->IsChecked();
	val->optionVSpaces = UI->optionVSpaces->IsChecked();
	val->optionSuffix = UI->optionSuffix->IsChecked();
	val->optionUppercase = UI->optionUppercase->IsChecked();
	val->optionAlpha = UI->optionAlpha->IsChecked();

	// user interface layout
	val->optionRemember = UI->optionRemember->IsChecked();
	val->optionInsertAndClose = UI->optionInsertAndClose->IsChecked();
	val->layoutTiny = UI->layoutTiny->GetValue();

	val->write_config();
}


/*
 * End of file  (ccSetup.cpp)
 */
