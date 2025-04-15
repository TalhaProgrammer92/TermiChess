#include "ansi.h"
#include <string>

std::string UI::getANSICode(const std::string& str, const std::string& fgColor, const std::string& bgColor, const std::string& style)
{
    return fgColor + bgColor + style + str + RESET;
}