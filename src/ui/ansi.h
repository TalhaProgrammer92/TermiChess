#pragma once

#include <iostream>

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
        LIGHT_WHITE,

        NONE
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
        LIGHT_WHITE,

        NONE
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
        HIDDEN,

        NONE
    };

    // Function declarations for generating ANSI codes
    std::string getFGAnsiCode(FGColor fg);
    std::string getBGAnsiCode(BGColor bg);
    std::string getStyleAnsiCode(Style style);

    // ANSI reset code
    extern const std::string RESET;

    // Function to generate ANSI code for colored output
    std::string generateAnsiCode(const std::string &text, FGColor fg, BGColor bg, Style style);
}