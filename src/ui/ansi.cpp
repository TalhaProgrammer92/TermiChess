#include <iostream>
#include "ansi.h"

//* Function to convert string to wstring
std::wstring stringToWstring(const std::string &str)
{
    std::wstring wstr(str.begin(), str.end());
    return wstr;
}

//* Function to generate ANSII code for color output
std::wstring generateAnsiCode(const std::wstring &text, const std::string &fg, const std::string &bg, const std::string &style)
{
    std::wstring ansiCode = L"";
    if (!fg.empty())
    {
        ansiCode += stringToWstring(fg);
    }

    if (!bg.empty())
    {
        ansiCode += stringToWstring(bg);
    }

    if (!style.empty())
    {
        ansiCode += stringToWstring(style);
    }

    ansiCode += text + stringToWstring(RESET);

    return ansiCode;
}