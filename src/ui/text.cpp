#include <iostream>
#include "ansi.h"
#include "text.h"

// using namespace std;
// using namespace UI;

UI::Text::Text(const std::string& text, UI::ColorProperty color)
{
	this->text = text;
	this->color = color;
}

std::string UI::Text::getText() const
{
	return text;
}
