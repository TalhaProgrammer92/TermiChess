#pragma once

#include "ansi.h"
#include "color.h"
#include <iostream>

namespace UI
{
	//* Text class
	class Text
	{
	private:
		std::string text;

	public:
		UI::ColorProperty color;

		//* Constructors
		Text() = default;
		Text(const std::string& text, UI::ColorProperty color);

		//* Getters
		std::string getText() const;

		//* Overload operator << to display
		friend std::ostream& operator<<(std::ostream& os, const Text& text)
		{
			os << UI::getANSICode(text.getText(), text.color.getFg(), text.color.getBg(), text.color.getStyle());
			return os;
		}
	};
}