#include <iostream>
#include "ui/ansi.h"
#include "ui/text.h"
#include "ui/color.h"

using namespace std;

int main()
{
    UI::Text text("I've fixed all bugs", UI::ColorProperty(
      UI::FG::BRIGHT_RED, UI::BG::DULL_BLUE, UI::STYLE::BOLD
    ));

    cout << text << endl;

    return 0;
}

//! Build the project with: g++ -g src/main.cpp src/ui/*.cpp -o TermiChess