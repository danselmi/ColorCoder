/*
 * Name:      ccCommons.h
 * Purpose:   Procedures and variables used in other ColorCoder classes
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#ifndef CCCOMMONS_H_INCLUDED
#define CCCOMMONS_H_INCLUDED

#include <wx/colour.h>
#include <wx/string.h>

enum
{
	NONE = 0,
	QUOTES,
	PARENTHESIS,
	BRACKETS,
	BRACES,
};

class ColorCoderValues
{
	public:

	bool stylePlain;
	bool styleRGB;
	bool styleHTML;
	bool styleOpenGL;
	bool styleWxWidgets;

	bool typeInteger;
	bool typeHex;
	bool typeFloat;

	bool optionDSpaces;
	bool optionVSpaces;
	bool optionSuffix;
	bool optionUppercase;
	bool optionAlpha;
	bool optionRemember;
	bool optionInsertAndClose;
	bool layoutTiny;

	int delimiters;
	int numDecimals;
	int numAlpha;

	int iR, iG, iB;

	wxColour selectPicker;
	wxString output;

	void read_config( void );
	void write_config( void );
	void change_layout( wxWindow* );
	void insert_output( wxWindow* );
	wxString update_output( void );

	ColorCoderValues() {}
	~ColorCoderValues() {}
};

#endif // CCCOMMONS_H_INCLUDED

/*
 * End of file  (ccCommons.h)
 */
