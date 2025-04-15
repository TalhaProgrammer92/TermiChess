#pragma once

#include "ansi.h"
#include <iostream>

namespace UI
{
	class ColorProperty
	{
		private:
			std::string fg;
			std::string bg;
			std::string style;
		
		public:
			//* Constructors
			ColorProperty() = default;
			ColorProperty(std::string fg, std::string bg, std::string style);

			//* Getters
			std::string getFg() const;
			std::string getBg() const;
			std::string getStyle() const;
	};
}