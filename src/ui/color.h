#pragma once

#include "ansi.h"

namespace UI
{
	class ColorProperty
	{
	private:
		UI::FGColor fg;
		UI::BGColor bg;
		UI::Style style;

	public:
		ColorProperty() {}

		ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);

		UI::FGColor getFGColor();
		UI::BGColor getBGColor();
		UI::Style getStyle();
	};
}