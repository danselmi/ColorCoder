/*
 * Name:      ccSetup.h
 * Purpose:   Configuration class definition for ColorCoder
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#ifndef CCSETUP_H_INCLUDED
#define CCSETUP_H_INCLUDED

#include <configurationpanel.h>

#include "ccCommons.h"	// Common functions for ColorCoder classes
#include "cc__wxFB.h"	// User interface defined with wxFormBuilder


class ColorCoderSetup : public cbConfigurationPanel
{
    public:

		ColorCoderSetup( wxWindow* parent );
		~ColorCoderSetup() {}

        wxString GetTitle() const { return wxT("ColorCoder defaults"); }
        wxString GetBitmapBaseName() const { return _T("ColorCoder"); }
        void OnApply();
        void OnCancel() {}

	private:

		ColorCoderValues* val;
		ColorCoderCFG* UI;
};


#endif // CCSETUP_H_INCLUDED

/*
 * End of file  (ccSetup.h)
 */
