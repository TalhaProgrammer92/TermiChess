#include <string>
#include "ansi.h"
#include "text.h"

// using namespace std;
// using namespace UI;

UI::Text::Text(const std::string text, UI::FGColor fgColor, UI::BGColor bgColor, UI::Style style)
{
	this->text = text;
	this->fgColor = fgColor;
	this->bgColor = bgColor;
	this->style = style;
}

std::string UI::Text::getText()
{
	return text;
}

UI::FGColor UI::Text::getFGColor()
{
	return fgColor;
}
UI::BGColor UI::Text::getBGColor()
{
	return bgColor;
}
UI::Style UI::Text::getStyle()
{
	return style;
}

std::wostream &operator<<(std::wostream &out, UI::Text &text)
{
	out << UI::generateAnsiCode(text.getText(), text.getFGColor(), text.getBGColor(), text.getStyle());
	return out;
}