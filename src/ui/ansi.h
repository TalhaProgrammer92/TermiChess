#pragma once

#include <string>

namespace UI
{
    // ANSI color codes for foreground
    enum class FGColor
    {
        DARK_BLACK,
        DARK_RED,
        DARK_GREEN,
        DARK_YELLOW,
        DARK_BLUE,
        DARK_MAGENTA,
        DARK_CYAN,
        DARK_WHITE,
        LIGHT_BLACK,
        LIGHT_RED,
        LIGHT_GREEN,
        LIGHT_YELLOW,
        LIGHT_BLUE,
        LIGHT_MAGENTA,
        LIGHT_CYAN,
        LIGHT_WHITE
    };

    // ANSI color codes for background
    enum class BGColor
    {
        DARK_BLACK,
        DARK_RED,
        DARK_GREEN,
        DARK_YELLOW,
        DARK_BLUE,
        DARK_MAGENTA,
        DARK_CYAN,
        DARK_WHITE,
        LIGHT_BLACK,
        LIGHT_RED,
        LIGHT_GREEN,
        LIGHT_YELLOW,
        LIGHT_BLUE,
        LIGHT_MAGENTA,
        LIGHT_CYAN,
        LIGHT_WHITE
    };

    // ANSI style codes
    enum class Style
    {
        BOLD,
        UNDERLINE,
        REVERSED,
        STRIKETHROUGH,
        DIM,
        ITALIC,
        BLINK,
        HIDDEN
    };

    // Function declarations for generating ANSI codes
    std::string getAnsiCode(FGColor fg);
    std::string getAnsiCode(BGColor bg);
    std::string getAnsiCode(Style style);

    // ANSI reset code
    extern const std::string RESET;

    // Function to generate ANSI code for colored output
    std::wstring generateAnsiCode(const std::string &text,
                                  FGColor fg = FGColor::DARK_WHITE,
                                  BGColor bg = BGColor::DARK_BLACK,
                                  Style style = Style::BOLD);
}