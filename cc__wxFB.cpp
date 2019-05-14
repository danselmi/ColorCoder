///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May  9 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "cc__wxFB.h"

///////////////////////////////////////////////////////////////////////////

ColorCoderUI::ColorCoderUI( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	backgroundPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( backgroundPanel, wxID_ANY, wxT("Select color") ), wxVERTICAL );
	
	selectPicker = new wxColourPickerCtrl( backgroundPanel, ID_selectPicker, *wxBLACK, wxDefaultPosition, wxSize( -1,50 ), 0 );
	selectPicker->SetMinSize( wxSize( -1,50 ) );
	selectPicker->SetMaxSize( wxSize( -1,50 ) );
	
	sbSizer9->Add( selectPicker, 0, wxEXPAND|wxALL, 5 );
	
	labelHTMLname = new wxStaticText( backgroundPanel, wxID_ANY, wxT("W3C HTML name:"), wxDefaultPosition, wxDefaultSize, 0 );
	labelHTMLname->Wrap( -1 );
	sbSizer9->Add( labelHTMLname, 0, wxTOP|wxLEFT, 10 );
	
	selectName = new wxListBox( backgroundPanel, ID_selectName, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxLB_SINGLE ); 
	selectName->SetMinSize( wxSize( 180,-1 ) );
	
	sbSizer9->Add( selectName, 1, wxEXPAND|wxALL, 5 );
	
	bSizer3->Add( sbSizer9, 0, wxEXPAND|wxALL, 5 );
	
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( backgroundPanel, wxID_ANY, wxT("Style") ), wxVERTICAL );
	
	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );
	
	stylePlain = new wxRadioButton( backgroundPanel, ID_stylePlain, wxT("Plain"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	bSizer92->Add( stylePlain, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxString delimitersChoices[] = { wxT("None"), wxT(" \" \""), wxT(" ( )"), wxT(" [ ]"), wxT(" { }") };
	int delimitersNChoices = sizeof( delimitersChoices ) / sizeof( wxString );
	delimiters = new wxChoice( backgroundPanel, ID_delimiters, wxDefaultPosition, wxDefaultSize, delimitersNChoices, delimitersChoices, 0 );
	delimiters->SetSelection( 0 );
	bSizer92->Add( delimiters, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	sbSizer7->Add( bSizer92, 0, 0, 5 );
	
	styleRGB = new wxRadioButton( backgroundPanel, ID_styleRGB, wxT("RGB components"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleRGB, 0, wxALL, 5 );
	
	styleHTML = new wxRadioButton( backgroundPanel, ID_styleHTML, wxT("HTML hex code"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleHTML, 0, wxALL, 5 );
	
	styleOpenGL = new wxRadioButton( backgroundPanel, ID_styleOpenGL, wxT("OpenGL color"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleOpenGL, 0, wxALL, 5 );
	
	styleWxWidgets = new wxRadioButton( backgroundPanel, ID_styleWxWidgets, wxT("wxWidgets"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleWxWidgets, 0, wxALL, 5 );
	
	bSizer9->Add( sbSizer7, 0, wxEXPAND|wxALL, 5 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( backgroundPanel, wxID_ANY, wxT("Data type") ), wxVERTICAL );
	
	typeInteger = new wxRadioButton( backgroundPanel, ID_typeInteger, wxT("Integer"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	sbSizer6->Add( typeInteger, 0, wxALL, 5 );
	
	typeHex = new wxRadioButton( backgroundPanel, ID_typeHex, wxT("Hex"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( typeHex, 0, wxALL, 5 );
	
	typeFloat = new wxRadioButton( backgroundPanel, ID_typeFloat, wxT("Float"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( typeFloat, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	labelDecimals = new wxStaticText( backgroundPanel, wxID_ANY, wxT("Decs:"), wxDefaultPosition, wxDefaultSize, 0 );
	labelDecimals->Wrap( -1 );
	bSizer10->Add( labelDecimals, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	numDecimals = new wxSpinCtrl( backgroundPanel, ID_numDecimals, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 2, 5, 2 );
	bSizer10->Add( numDecimals, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	sbSizer6->Add( bSizer10, 0, wxEXPAND|wxALL, 5 );
	
	bSizer9->Add( sbSizer6, 0, wxEXPAND|wxALL, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( backgroundPanel, wxID_ANY, wxT("Other options") ), wxVERTICAL );
	
	optionDSpaces = new wxCheckBox( backgroundPanel, ID_optionDSpaces, wxT("Spaces inside delimiters"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionDSpaces, 0, wxALL, 5 );
	
	optionVSpaces = new wxCheckBox( backgroundPanel, ID_optionVSpaces, wxT("Spaces between values"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionVSpaces, 0, wxALL, 5 );
	
	optionSuffix = new wxCheckBox( backgroundPanel, ID_optionSuffix, wxT("Add data type suffix"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionSuffix, 0, wxALL, 5 );
	
	optionUppercase = new wxCheckBox( backgroundPanel, ID_optionUppercase, wxT("Uppercase hex digits"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionUppercase, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	optionAlpha = new wxCheckBox( backgroundPanel, ID_optionAlpha, wxT("Alpha value"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( optionAlpha, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	numAlpha = new wxSpinCtrl( backgroundPanel, ID_numAlpha, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	bSizer8->Add( numAlpha, 0, wxRIGHT|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	labelAlpha = new wxStaticText( backgroundPanel, wxID_ANY, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 );
	labelAlpha->Wrap( -1 );
	bSizer8->Add( labelAlpha, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	sbSizer4->Add( bSizer8, 0, wxEXPAND|wxALL, 5 );
	
	bSizer9->Add( sbSizer4, 1, wxALL|wxEXPAND, 5 );
	
	bSizer81->Add( bSizer9, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( backgroundPanel, wxID_ANY, wxT("Output preview") ), wxHORIZONTAL );
	
	outputPreview = new wxTextCtrl( backgroundPanel, ID_outputPreview, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTRE|wxTE_NO_VSCROLL|wxTE_READONLY );
	outputPreview->SetFont( wxFont( 10, 76, 90, 90, false, wxEmptyString ) );
	
	sbSizer5->Add( outputPreview, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	bSizer81->Add( sbSizer5, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxVERTICAL );
	
	optionRemember = new wxCheckBox( backgroundPanel, ID_optionRemember, wxT("Remember current options"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( optionRemember, 0, wxEXPAND|wxALL, 5 );
	
	optionInsertAndClose = new wxCheckBox( backgroundPanel, ID_optionInsertAndClose, wxT("Close dialog after insert"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer91->Add( optionInsertAndClose, 0, wxEXPAND|wxALL, 5 );
	
	bSizer24->Add( bSizer91, 1, wxEXPAND|wxRIGHT|wxLEFT, 10 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer13->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	buttonInsert = new wxButton( backgroundPanel, ID_buttonInsert, wxT("Insert"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	buttonInsert->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	
	bSizer14->Add( buttonInsert, 1, wxALL|wxEXPAND, 5 );
	
	buttonCancel = new wxButton( backgroundPanel, ID_buttonCancel, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( buttonCancel, 1, wxALL|wxEXPAND, 5 );
	
	bSizer13->Add( bSizer14, 0, wxEXPAND, 5 );
	
	bSizer24->Add( bSizer13, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	bSizer81->Add( bSizer24, 0, wxEXPAND, 5 );
	
	bSizer3->Add( bSizer81, 0, wxEXPAND, 5 );
	
	changeLayout = new wxButton( backgroundPanel, wxID_ANY, wxT("<"), wxDefaultPosition, wxSize( 20,-1 ), 0 );
	changeLayout->SetMinSize( wxSize( 20,-1 ) );
	changeLayout->SetMaxSize( wxSize( 20,-1 ) );
	
	bSizer3->Add( changeLayout, 0, wxEXPAND|wxALL, 5 );
	
	backgroundPanel->SetSizer( bSizer3 );
	backgroundPanel->Layout();
	bSizer3->Fit( backgroundPanel );
	bSizer1->Add( backgroundPanel, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ColorCoderUI::dialog_button_close ) );
	selectPicker->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( ColorCoderUI::selectPicker_changed ), NULL, this );
	selectName->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ColorCoderUI::selectName_changed ), NULL, this );
	stylePlain->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	delimiters->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleRGB->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleHTML->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleOpenGL->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleWxWidgets->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	typeInteger->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	typeHex->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	typeFloat->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	numDecimals->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionDSpaces->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionVSpaces->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionSuffix->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionUppercase->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionAlpha->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	numAlpha->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionRemember->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionInsertAndClose->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	buttonInsert->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUI::buttonInsert_clicked ), NULL, this );
	buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUI::buttonCancel_clicked ), NULL, this );
	changeLayout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUI::changeLayout_clicked ), NULL, this );
}

ColorCoderUI::~ColorCoderUI()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ColorCoderUI::dialog_button_close ) );
	selectPicker->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( ColorCoderUI::selectPicker_changed ), NULL, this );
	selectName->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ColorCoderUI::selectName_changed ), NULL, this );
	stylePlain->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	delimiters->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleRGB->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleHTML->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleOpenGL->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	styleWxWidgets->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	typeInteger->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	typeHex->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	typeFloat->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	numDecimals->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionDSpaces->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionVSpaces->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionSuffix->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionUppercase->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionAlpha->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	numAlpha->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionRemember->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	optionInsertAndClose->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ColorCoderUI::control_clicked ), NULL, this );
	buttonInsert->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUI::buttonInsert_clicked ), NULL, this );
	buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUI::buttonCancel_clicked ), NULL, this );
	changeLayout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUI::changeLayout_clicked ), NULL, this );
	
}

ColorCoderCFG::ColorCoderCFG( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticText* m_staticText10;
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Select here the values you want to use by default for ColorCoder:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer81->Add( m_staticText10, 0, wxALL|wxEXPAND, 15 );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Initial color") ), wxVERTICAL );
	
	selectPicker = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxSize( 80,-1 ), 0 );
	sbSizer9->Add( selectPicker, 1, wxALL|wxEXPAND, 5 );
	
	bSizer81->Add( sbSizer9, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Prefix style") ), wxVERTICAL );
	
	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );
	
	stylePlain = new wxRadioButton( this, wxID_ANY, wxT("Plain"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	bSizer92->Add( stylePlain, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxString delimitersChoices[] = { wxT("None"), wxT(" \" \""), wxT(" ( )"), wxT(" [ ]"), wxT(" { }") };
	int delimitersNChoices = sizeof( delimitersChoices ) / sizeof( wxString );
	delimiters = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, delimitersNChoices, delimitersChoices, 0 );
	delimiters->SetSelection( 0 );
	bSizer92->Add( delimiters, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	sbSizer7->Add( bSizer92, 0, 0, 5 );
	
	styleRGB = new wxRadioButton( this, wxID_ANY, wxT("RGB components"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleRGB, 0, wxALL, 5 );
	
	styleHTML = new wxRadioButton( this, wxID_ANY, wxT("HTML hex code"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleHTML, 0, wxALL, 5 );
	
	styleOpenGL = new wxRadioButton( this, wxID_ANY, wxT("OpenGL color"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleOpenGL, 0, wxALL, 5 );
	
	styleWxWidgets = new wxRadioButton( this, wxID_ANY, wxT("wxWidgets"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer7->Add( styleWxWidgets, 0, wxALL, 5 );
	
	bSizer9->Add( sbSizer7, 2, wxEXPAND|wxALL, 5 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Data type") ), wxVERTICAL );
	
	typeInteger = new wxRadioButton( this, wxID_ANY, wxT("Integer"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	sbSizer6->Add( typeInteger, 0, wxALL, 5 );
	
	typeHex = new wxRadioButton( this, wxID_ANY, wxT("Hex"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( typeHex, 0, wxALL, 5 );
	
	typeFloat = new wxRadioButton( this, wxID_ANY, wxT("Float"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer6->Add( typeFloat, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticText* labelDecimals;
	labelDecimals = new wxStaticText( this, wxID_ANY, wxT("Decs:"), wxDefaultPosition, wxDefaultSize, 0 );
	labelDecimals->Wrap( -1 );
	bSizer10->Add( labelDecimals, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	numDecimals = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 2, 5, 2 );
	bSizer10->Add( numDecimals, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	sbSizer6->Add( bSizer10, 0, wxEXPAND|wxALL, 5 );
	
	bSizer9->Add( sbSizer6, 2, wxEXPAND|wxALL, 5 );
	
	bSizer17->Add( bSizer9, 4, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Other options") ), wxVERTICAL );
	
	optionDSpaces = new wxCheckBox( this, wxID_ANY, wxT("Spaces inside delimiters"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionDSpaces, 0, wxALL, 5 );
	
	optionVSpaces = new wxCheckBox( this, wxID_ANY, wxT("Spaces between values"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionVSpaces, 0, wxALL, 5 );
	
	optionSuffix = new wxCheckBox( this, wxID_ANY, wxT("Add data type suffix"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionSuffix, 0, wxALL, 5 );
	
	optionUppercase = new wxCheckBox( this, wxID_ANY, wxT("Uppercase hex digits"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( optionUppercase, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	optionAlpha = new wxCheckBox( this, wxID_ANY, wxT("Alpha value"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( optionAlpha, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 5 );
	
	numAlpha = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	bSizer8->Add( numAlpha, 0, wxRIGHT|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxStaticText* labelAlpha;
	labelAlpha = new wxStaticText( this, wxID_ANY, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 );
	labelAlpha->Wrap( -1 );
	bSizer8->Add( labelAlpha, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	sbSizer4->Add( bSizer8, 0, wxEXPAND|wxALL, 5 );
	
	bSizer18->Add( sbSizer4, 2, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("User interface") ), wxVERTICAL );
	
	optionRemember = new wxCheckBox( this, wxID_ANY, wxT("Remember last used options"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer10->Add( optionRemember, 0, wxEXPAND|wxALL, 5 );
	
	optionInsertAndClose = new wxCheckBox( this, wxID_ANY, wxT("Close dialog after inserting code"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer10->Add( optionInsertAndClose, 0, wxEXPAND|wxALL, 5 );
	
	wxStaticText* m_staticText7;
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Dialog layout:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	sbSizer10->Add( m_staticText7, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	layoutTiny = new wxRadioButton( this, wxID_ANY, wxT("Tiny version"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	bSizer20->Add( layoutTiny, 0, wxALL, 5 );
	
	layoutExtended = new wxRadioButton( this, wxID_ANY, wxT("Extended controls"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( layoutExtended, 0, wxALL, 5 );
	
	sbSizer10->Add( bSizer20, 0, wxEXPAND|wxLEFT, 10 );
	
	bSizer18->Add( sbSizer10, 2, wxEXPAND|wxALL, 5 );
	
	bSizer17->Add( bSizer18, 5, wxEXPAND, 5 );
	
	bSizer81->Add( bSizer17, 5, wxEXPAND, 5 );
	
	this->SetSizer( bSizer81 );
	this->Layout();
	bSizer81->Fit( this );
}

ColorCoderCFG::~ColorCoderCFG()
{
}

ColorCoderUITiny::ColorCoderUITiny( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	backgroundPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( backgroundPanel, wxID_ANY, wxT("Select color") ), wxVERTICAL );
	
	selectPicker = new wxColourPickerCtrl( backgroundPanel, ID_selectPicker, *wxBLACK, wxDefaultPosition, wxSize( -1,50 ), 0 );
	selectPicker->SetMinSize( wxSize( -1,50 ) );
	selectPicker->SetMaxSize( wxSize( -1,50 ) );
	
	sbSizer9->Add( selectPicker, 1, wxEXPAND|wxALL, 5 );
	
	bSizer54->Add( sbSizer9, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	buttonInsert = new wxButton( backgroundPanel, ID_buttonInsert, wxT("Insert"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	buttonInsert->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	
	bSizer14->Add( buttonInsert, 1, wxALL|wxEXPAND, 5 );
	
	buttonCancel = new wxButton( backgroundPanel, ID_buttonCancel, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( buttonCancel, 1, wxALL|wxEXPAND, 5 );
	
	bSizer54->Add( bSizer14, 0, wxEXPAND|wxTOP, 5 );
	
	bSizer3->Add( bSizer54, 1, wxEXPAND, 5 );
	
	changeLayout = new wxButton( backgroundPanel, wxID_ANY, wxT(">"), wxDefaultPosition, wxSize( 20,-1 ), 0 );
	changeLayout->SetToolTip( wxT("Change to the extended layout") );
	changeLayout->SetMinSize( wxSize( 20,-1 ) );
	changeLayout->SetMaxSize( wxSize( 20,-1 ) );
	
	bSizer3->Add( changeLayout, 0, wxEXPAND|wxALL, 5 );
	
	backgroundPanel->SetSizer( bSizer3 );
	backgroundPanel->Layout();
	bSizer3->Fit( backgroundPanel );
	bSizer1->Add( backgroundPanel, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ColorCoderUITiny::dialog_button_close ) );
	selectPicker->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( ColorCoderUITiny::selectPicker_changed ), NULL, this );
	buttonInsert->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUITiny::buttonInsert_clicked ), NULL, this );
	buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUITiny::buttonCancel_clicked ), NULL, this );
	changeLayout->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUITiny::changeLayout_clicked ), NULL, this );
}

ColorCoderUITiny::~ColorCoderUITiny()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ColorCoderUITiny::dialog_button_close ) );
	selectPicker->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( ColorCoderUITiny::selectPicker_changed ), NULL, this );
	buttonInsert->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUITiny::buttonInsert_clicked ), NULL, this );
	buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUITiny::buttonCancel_clicked ), NULL, this );
	changeLayout->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ColorCoderUITiny::changeLayout_clicked ), NULL, this );
	
}
