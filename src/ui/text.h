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
		//* Color Property
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

	//* Message Class
	class Message
	{
		private:
			Text text;
		
		public:
			//* Constructor
			Message(Text text);

			//* Display method
			
	};
}