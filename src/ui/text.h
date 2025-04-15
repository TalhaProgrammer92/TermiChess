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

		//* Constructor
		Text(const std::string text, UI::ColorProperty color);

		//* Getters
		std::string getText();

		//* Display method
		void display(bool line_break);
	};
}