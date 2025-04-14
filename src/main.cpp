#include <iostream>
#include "ui/ansi.h"

using namespace std;

int main()
{
    wcout << UI::generateAnsiCode(
        "Hello, Rayan!",        //! Write your name here (You can change UI elements)
        UI::FGColor::DARK_GREEN,
        UI::BGColor::LIGHT_CYAN,
        UI::Style::ITALIC) << endl;

    return 0;
}
