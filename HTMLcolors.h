/*
 * Name:      HTMLcolors.h
 * Purpose:   HTML colors names and codes for the wxListBox
 *            The colorList class defines the management members
 *
 * Author:    Deschamps (deschamps@primi.net)
 * Copyright: Deschamps 2010-05-19
 * License:   GNU-GPL v3 or later
 */

#ifndef HTMLCOLORS_H_INCLUDED
#define HTMLCOLORS_H_INCLUDED

enum
{
	NAME = 0,
	CODE,
};

const wxString HTMLcolors[][2] =
{
	{ wxT("AliceBlue  				"), wxT("#F0F8FF") },
	{ wxT("AntiqueWhite  			"), wxT("#FAEBD7") },
	{ wxT("Aqua  					"), wxT("#00FFFF") },
	{ wxT("Aquamarine  				"), wxT("#7FFFD4") },
	{ wxT("Azure  					"), wxT("#F0FFFF") },
	{ wxT("Beige  					"), wxT("#F5F5DC") },
	{ wxT("Bisque  					"), wxT("#FFE4C4") },
	{ wxT("Black  					"), wxT("#000000") },
	{ wxT("BlanchedAlmond  			"), wxT("#FFEBCD") },
	{ wxT("Blue  					"), wxT("#0000FF") },
	{ wxT("BlueViolet  				"), wxT("#8A2BE2") },
	{ wxT("Brown  					"), wxT("#A52A2A") },
	{ wxT("BurlyWood  				"), wxT("#DEB887") },
	{ wxT("CadetBlue  				"), wxT("#5F9EA0") },
	{ wxT("Chartreuse  				"), wxT("#7FFF00") },
	{ wxT("Chocolate  				"), wxT("#D2691E") },
	{ wxT("Coral  					"), wxT("#FF7F50") },
	{ wxT("CornflowerBlue  			"), wxT("#6495ED") },
	{ wxT("Cornsilk  				"), wxT("#FFF8DC") },
	{ wxT("Crimson  				"), wxT("#DC143C") },
	{ wxT("Cyan  					"), wxT("#00FFFF") },
	{ wxT("DarkBlue  				"), wxT("#00008B") },
	{ wxT("DarkCyan  				"), wxT("#008B8B") },
	{ wxT("DarkGoldenRod  			"), wxT("#B8860B") },
	{ wxT("DarkGray  				"), wxT("#A9A9A9") },
	{ wxT("DarkGrey  				"), wxT("#A9A9A9") },
	{ wxT("DarkGreen  				"), wxT("#006400") },
	{ wxT("DarkKhaki  				"), wxT("#BDB76B") },
	{ wxT("DarkMagenta  			"), wxT("#8B008B") },
	{ wxT("DarkOliveGreen  			"), wxT("#556B2F") },
	{ wxT("Darkorange  				"), wxT("#FF8C00") },
	{ wxT("DarkOrchid  				"), wxT("#9932CC") },
	{ wxT("DarkRed  				"), wxT("#8B0000") },
	{ wxT("DarkSalmon  				"), wxT("#E9967A") },
	{ wxT("DarkSeaGreen  			"), wxT("#8FBC8F") },
	{ wxT("DarkSlateBlue  			"), wxT("#483D8B") },
	{ wxT("DarkSlateGray  			"), wxT("#2F4F4F") },
	{ wxT("DarkSlateGrey  			"), wxT("#2F4F4F") },
	{ wxT("DarkTurquoise  			"), wxT("#00CED1") },
	{ wxT("DarkViolet  				"), wxT("#9400D3") },
	{ wxT("DeepPink  				"), wxT("#FF1493") },
	{ wxT("DeepSkyBlue  			"), wxT("#00BFFF") },
	{ wxT("DimGray  				"), wxT("#696969") },
	{ wxT("DimGrey  				"), wxT("#696969") },
	{ wxT("DodgerBlue  				"), wxT("#1E90FF") },
	{ wxT("FireBrick  				"), wxT("#B22222") },
	{ wxT("FloralWhite  			"), wxT("#FFFAF0") },
	{ wxT("ForestGreen  			"), wxT("#228B22") },
	{ wxT("Fuchsia  				"), wxT("#FF00FF") },
	{ wxT("Gainsboro  				"), wxT("#DCDCDC") },
	{ wxT("GhostWhite  				"), wxT("#F8F8FF") },
	{ wxT("Gold  					"), wxT("#FFD700") },
	{ wxT("GoldenRod  				"), wxT("#DAA520") },
	{ wxT("Gray  					"), wxT("#808080") },
	{ wxT("Grey  					"), wxT("#808080") },
	{ wxT("Green  					"), wxT("#008000") },
	{ wxT("GreenYellow  			"), wxT("#ADFF2F") },
	{ wxT("HoneyDew  				"), wxT("#F0FFF0") },
	{ wxT("HotPink  				"), wxT("#FF69B4") },
	{ wxT("IndianRed   				"), wxT("#CD5C5C") },
	{ wxT("Indigo   				"), wxT("#4B0082") },
	{ wxT("Ivory  					"), wxT("#FFFFF0") },
	{ wxT("Khaki  					"), wxT("#F0E68C") },
	{ wxT("Lavender  				"), wxT("#E6E6FA") },
	{ wxT("LavenderBlush  			"), wxT("#FFF0F5") },
	{ wxT("LawnGreen  				"), wxT("#7CFC00") },
	{ wxT("LemonChiffon  			"), wxT("#FFFACD") },
	{ wxT("LightBlue  				"), wxT("#ADD8E6") },
	{ wxT("LightCoral  				"), wxT("#F08080") },
	{ wxT("LightCyan  				"), wxT("#E0FFFF") },
	{ wxT("LightGoldenRodYellow  	"), wxT("#FAFAD2") },
	{ wxT("LightGray  				"), wxT("#D3D3D3") },
	{ wxT("LightGrey  				"), wxT("#D3D3D3") },
	{ wxT("LightGreen  				"), wxT("#90EE90") },
	{ wxT("LightPink  				"), wxT("#FFB6C1") },
	{ wxT("LightSalmon  			"), wxT("#FFA07A") },
	{ wxT("LightSeaGreen  			"), wxT("#20B2AA") },
	{ wxT("LightSkyBlue  			"), wxT("#87CEFA") },
	{ wxT("LightSlateGray  			"), wxT("#778899") },
	{ wxT("LightSlateGrey  			"), wxT("#778899") },
	{ wxT("LightSteelBlue  			"), wxT("#B0C4DE") },
	{ wxT("LightYellow  			"), wxT("#FFFFE0") },
	{ wxT("Lime  					"), wxT("#00FF00") },
	{ wxT("LimeGreen  				"), wxT("#32CD32") },
	{ wxT("Linen  					"), wxT("#FAF0E6") },
	{ wxT("Magenta  				"), wxT("#FF00FF") },
	{ wxT("Maroon  					"), wxT("#800000") },
	{ wxT("MediumAquaMarine  		"), wxT("#66CDAA") },
	{ wxT("MediumBlue  				"), wxT("#0000CD") },
	{ wxT("MediumOrchid  			"), wxT("#BA55D3") },
	{ wxT("MediumPurple  			"), wxT("#9370D8") },
	{ wxT("MediumSeaGreen  			"), wxT("#3CB371") },
	{ wxT("MediumSlateBlue  		"), wxT("#7B68EE") },
	{ wxT("MediumSpringGreen  		"), wxT("#00FA9A") },
	{ wxT("MediumTurquoise  		"), wxT("#48D1CC") },
	{ wxT("MediumVioletRed  		"), wxT("#C71585") },
	{ wxT("MidnightBlue  			"), wxT("#191970") },
	{ wxT("MintCream  				"), wxT("#F5FFFA") },
	{ wxT("MistyRose  				"), wxT("#FFE4E1") },
	{ wxT("Moccasin  				"), wxT("#FFE4B5") },
	{ wxT("NavajoWhite  			"), wxT("#FFDEAD") },
	{ wxT("Navy  					"), wxT("#000080") },
	{ wxT("OldLace  				"), wxT("#FDF5E6") },
	{ wxT("Olive  					"), wxT("#808000") },
	{ wxT("OliveDrab  				"), wxT("#6B8E23") },
	{ wxT("Orange  					"), wxT("#FFA500") },
	{ wxT("OrangeRed  				"), wxT("#FF4500") },
	{ wxT("Orchid  					"), wxT("#DA70D6") },
	{ wxT("PaleGoldenRod  			"), wxT("#EEE8AA") },
	{ wxT("PaleGreen  				"), wxT("#98FB98") },
	{ wxT("PaleTurquoise  			"), wxT("#AFEEEE") },
	{ wxT("PaleVioletRed  			"), wxT("#D87093") },
	{ wxT("PapayaWhip  				"), wxT("#FFEFD5") },
	{ wxT("PeachPuff  				"), wxT("#FFDAB9") },
	{ wxT("Peru  					"), wxT("#CD853F") },
	{ wxT("Pink  					"), wxT("#FFC0CB") },
	{ wxT("Plum  					"), wxT("#DDA0DD") },
	{ wxT("PowderBlue  				"), wxT("#B0E0E6") },
	{ wxT("Purple  					"), wxT("#800080") },
	{ wxT("Red  					"), wxT("#FF0000") },
	{ wxT("RosyBrown  				"), wxT("#BC8F8F") },
	{ wxT("RoyalBlue  				"), wxT("#4169E1") },
	{ wxT("SaddleBrown  			"), wxT("#8B4513") },
	{ wxT("Salmon  					"), wxT("#FA8072") },
	{ wxT("SandyBrown  				"), wxT("#F4A460") },
	{ wxT("SeaGreen  				"), wxT("#2E8B57") },
	{ wxT("SeaShell  				"), wxT("#FFF5EE") },
	{ wxT("Sienna  					"), wxT("#A0522D") },
	{ wxT("Silver  					"), wxT("#C0C0C0") },
	{ wxT("SkyBlue  				"), wxT("#87CEEB") },
	{ wxT("SlateBlue  				"), wxT("#6A5ACD") },
	{ wxT("SlateGray  				"), wxT("#708090") },
	{ wxT("SlateGrey  				"), wxT("#708090") },
	{ wxT("Snow  					"), wxT("#FFFAFA") },
	{ wxT("SpringGreen  			"), wxT("#00FF7F") },
	{ wxT("SteelBlue  				"), wxT("#4682B4") },
	{ wxT("Tan  					"), wxT("#D2B48C") },
	{ wxT("Teal  					"), wxT("#008080") },
	{ wxT("Thistle  				"), wxT("#D8BFD8") },
	{ wxT("Tomato  					"), wxT("#FF6347") },
	{ wxT("Turquoise  				"), wxT("#40E0D0") },
	{ wxT("Violet  					"), wxT("#EE82EE") },
	{ wxT("Wheat  					"), wxT("#F5DEB3") },
	{ wxT("White  					"), wxT("#FFFFFF") },
	{ wxT("WhiteSmoke  				"), wxT("#F5F5F5") },
	{ wxT("Yellow  					"), wxT("#FFFF00") },
	{ wxT("YellowGreen  			"), wxT("#9ACD32") },

	// These must be always the last two elements:
	{ wxT("--- custom color ---		"), wxT("#------") },
	{ wxEmptyString, wxEmptyString }
};


class colorList
{
	public:

		colorList() {}	// ctor
		~colorList() {}	// dtor

		int GetCount( void )
		// returns number of elements in the colors array
		{
			int i = 0;
			while( HTMLcolors[i][NAME] != wxEmptyString ) i++;
			return i;
		}

		int Index( wxString color, int type )
		// returns the index from an element name or code
		{
			int i = 0;
			int j = GetCount();
			if( type == CODE || type == NAME )
				for ( int i = 0; i < j; i++ )
					if( color == HTMLcolors[i][type] ) break;

			//return ( i == j ? wxNOT_FOUND : i );
			return i;
		}

		wxString Item( int index, int type )
		// returns the content (name or code) from an index
		{
			wxString aux = wxEmptyString;;
			if( index < GetCount() && ( type == CODE || type == NAME ) )
				aux = HTMLcolors[index][type];

			return aux.Trim( true ); // wxEmptyString if wrong index or type
		}

		wxString GetName( wxString code )
		// returns the color name from his code
		{
			wxString aux;
			int i = 0;
			int j = GetCount();
			while( HTMLcolors[i][CODE] != code && ++i < j );

			aux = HTMLcolors[i][NAME];
			return aux.Trim( true ); // wxEmptyString if not found
		}

		wxString GetCode( wxString name )
		// returns the color code from his name
		{
			wxString aux;
			int i = 0;
			int j = GetCount();
			do
			{
				aux = HTMLcolors[i][NAME];
				aux.Trim( true );
			} while( aux != name && ++i < j );

			return HTMLcolors[i][CODE]; // wxEmptyString if not found
		}
};

#endif // HTMLCOLORS_H_INCLUDED

/*
 * End of file  (HTMLcolors.h)
 */
