#include "func.h"
#include <iostream>

void UI::printLine(char character, int size, bool line_break)
{
	//! PRint characters line
	for (int i = 0; i < size; i++)
		std::cout << character;

	//! New line
	if (line_break)
		std::cout << std::endl;
}
