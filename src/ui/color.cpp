#include "color.h"
#include "ansi.h"

UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}

UI::FGColor UI::ColorProperty::getFGColor()
{
	return fg;
}

UI::BGColor UI::ColorProperty::getBGColor()
{
	return bg;
}

UI::Style UI::ColorProperty::getStyle()
{
	return style;
}