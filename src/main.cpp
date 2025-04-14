#include <iostream>
#include "ui/ansi.h"
#include "ui/text.h"

using namespace std;

int main()
{
    UI::Text text("Talha & Areeb", UI::FGColor::LIGHT_BLUE, UI::BGColor::LIGHT_RED, UI::Style::BOLD);

    wcout << UI::generateAnsiCode(text.getText(), text.getFGColor(), text.getBGColor(), text.getStyle()) << endl;

    return 0;
}
