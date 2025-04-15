#include <iostream>
#include "ansi.h"
#include "text.h"

// using namespace std;
// using namespace UI;

UI::Text::Text(const std::string text, UI::ColorProperty color)
{
	this->text = text;
	this->color = color;
}

std::string UI::Text::getText()
{
	return text;
}

void UI::Text::display(bool line_break)
{
	std::cout << UI::generateAnsiCode(text, color.getFGColor(), color.getBGColor(), color.getStyle());
	if (line_break) std::cout << std::endl;
}