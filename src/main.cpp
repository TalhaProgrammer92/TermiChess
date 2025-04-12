#include <iostream>
#include "ui/ansi.h"

using namespace std;

int main()
{
    wcout << generateAnsiCode(stringToWstring("Welcome to TermiChess"), FG::LIGHT_RED, BG::LIGHT_CYAN, STYLE::BOLD) << endl;

    return 0;
}
