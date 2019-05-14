///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May  9 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __cc__wxFB__
#define __cc__wxFB__

#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/clrpicker.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/listbox.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/radiobut.h>
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/checkbox.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class ColorCoderUI
///////////////////////////////////////////////////////////////////////////////
class ColorCoderUI : public wxDialog 
{
	private:
	
	protected:
		enum
		{
			ID_selectPicker = 1000,
			ID_selectName,
			ID_stylePlain,
			ID_delimiters,
			ID_styleRGB,
			ID_styleHTML,
			ID_styleOpenGL,
			ID_styleWxWidgets,
			ID_typeInteger,
			ID_typeHex,
			ID_typeFloat,
			ID_numDecimals,
			ID_optionDSpaces,
			ID_optionVSpaces,
			ID_optionSuffix,
			ID_optionUppercase,
			ID_optionAlpha,
			ID_numAlpha,
			ID_outputPreview,
			ID_optionRemember,
			ID_optionInsertAndClose,
			ID_buttonInsert,
			ID_buttonCancel,
		};
		
		wxPanel* backgroundPanel;
		wxColourPickerCtrl* selectPicker;
		wxStaticText* labelHTMLname;
		wxListBox* selectName;
		wxRadioButton* stylePlain;
		wxChoice* delimiters;
		wxRadioButton* styleRGB;
		wxRadioButton* styleHTML;
		wxRadioButton* styleOpenGL;
		wxRadioButton* styleWxWidgets;
		wxRadioButton* typeInteger;
		wxRadioButton* typeHex;
		wxRadioButton* typeFloat;
		wxStaticText* labelDecimals;
		wxSpinCtrl* numDecimals;
		wxCheckBox* optionDSpaces;
		wxCheckBox* optionVSpaces;
		wxCheckBox* optionSuffix;
		wxCheckBox* optionUppercase;
		wxCheckBox* optionAlpha;
		wxSpinCtrl* numAlpha;
		wxStaticText* labelAlpha;
		wxTextCtrl* outputPreview;
		wxCheckBox* optionRemember;
		wxCheckBox* optionInsertAndClose;
		
		wxButton* buttonInsert;
		wxButton* buttonCancel;
		wxButton* changeLayout;
		
		// Virtual event handlers, overide them in your derived class
		virtual void dialog_button_close( wxCloseEvent& event ) { event.Skip(); }
		virtual void selectPicker_changed( wxColourPickerEvent& event ) { event.Skip(); }
		virtual void selectName_changed( wxCommandEvent& event ) { event.Skip(); }
		virtual void control_clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonInsert_clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonCancel_clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void changeLayout_clicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ColorCoderUI( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = 0 );
		~ColorCoderUI();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ColorCoderCFG
///////////////////////////////////////////////////////////////////////////////
class ColorCoderCFG : public wxPanel 
{
	private:
	
	protected:
	
	public:
		wxColourPickerCtrl* selectPicker;
		wxRadioButton* stylePlain;
		wxChoice* delimiters;
		wxRadioButton* styleRGB;
		wxRadioButton* styleHTML;
		wxRadioButton* styleOpenGL;
		wxRadioButton* styleWxWidgets;
		wxRadioButton* typeInteger;
		wxRadioButton* typeHex;
		wxRadioButton* typeFloat;
		wxSpinCtrl* numDecimals;
		wxCheckBox* optionDSpaces;
		wxCheckBox* optionVSpaces;
		wxCheckBox* optionSuffix;
		wxCheckBox* optionUppercase;
		wxCheckBox* optionAlpha;
		wxSpinCtrl* numAlpha;
		wxCheckBox* optionRemember;
		wxCheckBox* optionInsertAndClose;
		wxRadioButton* layoutTiny;
		wxRadioButton* layoutExtended;
		
		ColorCoderCFG( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL );
		~ColorCoderCFG();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ColorCoderUITiny
///////////////////////////////////////////////////////////////////////////////
class ColorCoderUITiny : public wxDialog 
{
	private:
	
	protected:
		enum
		{
			ID_selectPicker = 1000,
			ID_buttonInsert,
			ID_buttonCancel,
		};
		
		wxPanel* backgroundPanel;
		wxColourPickerCtrl* selectPicker;
		wxButton* buttonInsert;
		wxButton* buttonCancel;
		wxButton* changeLayout;
		
		// Virtual event handlers, overide them in your derived class
		virtual void dialog_button_close( wxCloseEvent& event ) { event.Skip(); }
		virtual void selectPicker_changed( wxColourPickerEvent& event ) { event.Skip(); }
		virtual void buttonInsert_clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonCancel_clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void changeLayout_clicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ColorCoderUITiny( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = 0 );
		~ColorCoderUITiny();
	
};

#endif //__cc__wxFB__
