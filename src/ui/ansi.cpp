#include "ansi.h"
#include <iostream>

using namespace UI;

// Initialize the RESET constant
const std::string RESET = "\033[0m";

// Function to generate ANSI code for foreground colors
std::string getFGAnsiCode(FGColor fg)
{
    switch (fg)
    {
    case FGColor::DARK_BLACK:
        return "\033[30m";
    case FGColor::DARK_RED:
        return "\033[31m";
    case FGColor::DARK_GREEN:
        return "\033[32m";
    case FGColor::DARK_YELLOW:
        return "\033[33m";
    case FGColor::DARK_BLUE:
        return "\033[34m";
    case FGColor::DARK_MAGENTA:
        return "\033[35m";
    case FGColor::DARK_CYAN:
        return "\033[36m";
    case FGColor::DARK_WHITE:
        return "\033[37m";
    case FGColor::LIGHT_BLACK:
        return "\033[90m";
    case FGColor::LIGHT_RED:
        return "\033[91m";
    case FGColor::LIGHT_GREEN:
        return "\033[92m";
    case FGColor::LIGHT_YELLOW:
        return "\033[93m";
    case FGColor::LIGHT_BLUE:
        return "\033[94m";
    case FGColor::LIGHT_MAGENTA:
        return "\033[95m";
    case FGColor::LIGHT_CYAN:
        return "\033[96m";
    case FGColor::LIGHT_WHITE:
        return "\033[97m";
    default:
        return "";
    }
}

// Function to generate ANSI code for background colors
std::string getBGAnsiCode(BGColor bg)
{
    switch (bg)
    {
    case BGColor::DARK_BLACK:
        return "\033[40m";
    case BGColor::DARK_RED:
        return "\033[41m";
    case BGColor::DARK_GREEN:
        return "\033[42m";
    case BGColor::DARK_YELLOW:
        return "\033[43m";
    case BGColor::DARK_BLUE:
        return "\033[44m";
    case BGColor::DARK_MAGENTA:
        return "\033[45m";
    case BGColor::DARK_CYAN:
        return "\033[46m";
    case BGColor::DARK_WHITE:
        return "\033[47m";
    case BGColor::LIGHT_BLACK:
        return "\033[100m";
    case BGColor::LIGHT_RED:
        return "\033[101m";
    case BGColor::LIGHT_GREEN:
        return "\033[102m";
    case BGColor::LIGHT_YELLOW:
        return "\033[103m";
    case BGColor::LIGHT_BLUE:
        return "\033[104m";
    case BGColor::LIGHT_MAGENTA:
        return "\033[105m";
    case BGColor::LIGHT_CYAN:
        return "\033[106m";
    case BGColor::LIGHT_WHITE:
        return "\033[107m";
    default:
        return "";
    }
}

// Function to generate ANSI code for styles
std::string getStyleAnsiCode(Style style)
{
    switch (style)
    {
    case Style::BOLD:
        return "\033[1m";
    case Style::UNDERLINE:
        return "\033[4m";
    case Style::REVERSED:
        return "\033[7m";
    case Style::STRIKETHROUGH:
        return "\033[9m";
    case Style::DIM:
        return "\033[2m";
    case Style::ITALIC:
        return "\033[3m";
    case Style::BLINK:
        return "\033[5m";
    case Style::HIDDEN:
        return "\033[8m";
    default:
        return "";
    }
}

// Function to generate ANSI code for colored output
std::string generateAnsiCode(const std::string &text, FGColor fg, BGColor bg, Style style)
{
    std::string ansiCode = getFGAnsiCode(fg) +
                           getBGAnsiCode(bg) +
                           getStyleAnsiCode(style) +
                           text +
                           RESET;
    return ansiCode;
}
