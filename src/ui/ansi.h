#pragma once

#include <iostream>

namespace FG
{
    //* ANSI dark color codes for terminal output
    const std::string DARK_BLACK = "\033[30m";
    const std::string DARK_RED = "\033[31m";
    const std::string DARK_GREEN = "\033[32m";
    const std::string DARK_YELLOW = "\033[33m";
    const std::string DARK_BLUE = "\033[34m";
    const std::string DARK_MAGENTA = "\033[35m";
    const std::string DARK_CYAN = "\033[36m";
    const std::string DARK_WHITE = "\033[37m";

    //* ANSI light color codes for terminal output
    const std::string LIGHT_BLACK = "\033[90m";
    const std::string LIGHT_RED = "\033[91m";
    const std::string LIGHT_GREEN = "\033[92m";
    const std::string LIGHT_YELLOW = "\033[93m";
    const std::string LIGHT_BLUE = "\033[94m";
    const std::string LIGHT_MAGENTA = "\033[95m";
    const std::string LIGHT_CYAN = "\033[96m";
    const std::string LIGHT_WHITE = "\033[97m";
}

namespace BG
{
    //* ANSI dark color codes for terminal output
    const std::string DARK_BLACK = "\033[40m";
    const std::string DARK_RED = "\033[41m";
    const std::string DARK_GREEN = "\033[42m";
    const std::string DARK_YELLOW = "\033[43m";
    const std::string DARK_BLUE = "\033[44m";
    const std::string DARK_MAGENTA = "\033[45m";
    const std::string DARK_CYAN = "\033[46m";
    const std::string DARK_WHITE = "\033[47m";

    //* ANSI light color codes for terminal output
    const std::string LIGHT_BLACK = "\033[100m";
    const std::string LIGHT_RED = "\033[101m";
    const std::string LIGHT_GREEN = "\033[102m";
    const std::string LIGHT_YELLOW = "\033[103m";
    const std::string LIGHT_BLUE = "\033[104m";
    const std::string LIGHT_MAGENTA = "\033[105m";
    const std::string LIGHT_CYAN = "\033[106m";
    const std::string LIGHT_WHITE = "\033[107m";
}

namespace STYLE
{
    //* ANSI style codes for terminal output
    const std::string BOLD = "\033[1m";
    const std::string UNDERLINE = "\033[4m";
    const std::string REVERSED = "\033[7m";
    const std::string STRIKETHROUGH = "\033[9m";
    const std::string DIM = "\033[2m";
    const std::string ITALIC = "\033[3m";
    const std::string BLINK = "\033[5m";
    const std::string HIDDEN = "\033[8m";
}

//* ANSI reset code for terminal output
const std::string RESET = "\033[0m";

//* Functions to generate ANSII code for color output
std::wstring generateAnsiCode(const std::wstring &text, const std::string &fg, const std::string &bg, const std::string &style);

//* Function to convert string to wstring
std::wstring stringToWstring(const std::string &str);