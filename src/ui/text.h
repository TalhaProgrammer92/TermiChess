#pragma once

#include "ansi.h"
#include "color.h"
#include "func.h"
#include <iostream>
#include <vector>

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
			vector<Text> text;
		
		public:
			//* Add text
			void addText(Text text);

			//* Display method
			void display();
	};
}
