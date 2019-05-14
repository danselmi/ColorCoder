/*
 * Name:      ccGui.h
 * Purpose:   User interface class definition for ColorCoder
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#ifndef CCGUI_H_INCLUDED
#define CCGUI_H_INCLUDED

#include "cc__wxFB.h"		// User interface defined with wxFormBuilder
#include "ccCommons.h"		// Common functions used in other classes
#include "HTMLcolors.h"		// Used for the wxListBox content mngmt


/*
 * class ColorCoderDialogTiny (small UI)
 */

class ColorCoderDialogTiny : public ColorCoderUITiny
{
	private:

		ColorCoderValues* val;

        void dialog_button_close( wxCloseEvent& WXUNUSED(event) ) { Destroy(); }
        void buttonCancel_clicked( wxCommandEvent& WXUNUSED(event) ) { Destroy(); }
        void buttonInsert_clicked( wxCommandEvent& WXUNUSED(event) );
        void changeLayout_clicked( wxCommandEvent& WXUNUSED(event) );
		void selectPicker_changed( wxColourPickerEvent& event );

	public:

		ColorCoderDialogTiny(
			ColorCoderValues* val,
			wxWindow* parent,
			wxWindowID id = wxID_ANY,
			const wxString& title = wxT("ColorCoder"),
			const wxPoint& pos = wxDefaultPosition,
			const wxSize& size = wxDefaultSize,
			long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~ColorCoderDialogTiny();
};


/*
 * class ColorCoderDialog (extended UI)
 */

class ColorCoderDialog : public ColorCoderUI
{
    private:

		colorList htmlColors;
		ColorCoderValues* val;

        void dialog_button_close( wxCloseEvent& WXUNUSED(event) ) { Destroy(); }
        void buttonCancel_clicked( wxCommandEvent& WXUNUSED(event) ) { Destroy(); }
        void buttonInsert_clicked( wxCommandEvent& WXUNUSED(event) );
        void changeLayout_clicked( wxCommandEvent& WXUNUSED(event) );
		void control_clicked( wxCommandEvent& WXUNUSED(event) );
		void selectPicker_changed( wxColourPickerEvent& event );
		void selectName_changed( wxCommandEvent& WXUNUSED( event ) );
		void update_enabled_controls( void );

    public:

		ColorCoderDialog(
			ColorCoderValues* val,
			wxWindow* parent,
			wxWindowID id = wxID_ANY,
			const wxString& title = wxT("ColorCoder"),
			const wxPoint& pos = wxDefaultPosition,
			const wxSize& size = wxDefaultSize,
			long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP );

		~ColorCoderDialog();
};

#endif // CCGUI_H_INCLUDED

/*
 * End of file  (ccGui.h)
 */
