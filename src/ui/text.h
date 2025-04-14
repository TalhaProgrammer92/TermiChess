#pragma once

#include "ansi.h"
#include <string>

namespace UI    
{
	//* Text class
	class Text
    {
		private:
			std::string text;
			UI::FGColor fgColor;
			UI::BGColor bgColor;
			UI::Style style;
		
		public:
			//* Constructor
            Text(const std::string text, UI::FGColor fgColor, UI::BGColor bgColor, UI::Style style);

			//* Getters
			std::string getText();
			UI::FGColor getFGColor();
			UI::BGColor getBGColor();
			UI::Style getStyle();

			//* Overlaod << operator for display
			friend std::wostream& operator<<(std::wostream& out, const Text& text);
    };
}