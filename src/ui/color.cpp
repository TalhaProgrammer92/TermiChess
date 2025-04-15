#include "color.h"
#include "ansi.h"
#include <iostream>

//* Constructor
UI::ColorProperty::ColorProperty(std::string fg, std::string bg, std::string style) : fg(fg), bg(bg), style(style) {}

//* Getters
std::string UI::ColorProperty::getFg() const {
	return fg;
}

std::string UI::ColorProperty::getBg() const {
	return bg;
}

std::string UI::ColorProperty::getStyle() const {
	return style;
}