#ifndef ANSI_H
#define ANSI_H

#include <string>

namespace UI
{
    namespace FG
    {
        const std::string DULL_BLACK = "\033[30m";
        const std::string DULL_RED = "\033[31m";
        const std::string DULL_GREEN = "\033[32m";
        const std::string DULL_YELLOW = "\033[33m";
        const std::string DULL_BLUE = "\033[34m";
        const std::string DULL_MAGENTA = "\033[35m";
        const std::string DULL_CYAN = "\033[36m";
        const std::string DULL_WHITE = "\033[37m";
        
        const std::string BRIGHT_BLACK = "\033[90m";
        const std::string BRIGHT_RED = "\033[91m";
        const std::string BRIGHT_GREEN = "\033[92m";
        const std::string BRIGHT_YELLOW = "\033[93m";
        const std::string BRIGHT_BLUE = "\033[94m";
        const std::string BRIGHT_MAGENTA = "\033[95m";
        const std::string BRIGHT_CYAN = "\033[96m";
        const std::string BRIGHT_WHITE = "\033[97m";
        
        const std::string NONE = "";
    } // namespace FG

    namespace BG
    {
        const std::string DULL_BLACK = "\033[40m";
        const std::string DULL_RED = "\033[41m";
        const std::string DULL_GREEN = "\033[42m";
        const std::string DULL_YELLOW = "\033[43m";
        const std::string DULL_BLUE = "\033[44m";
        const std::string DULL_MAGENTA = "\033[45m";
        const std::string DULL_CYAN = "\033[46m";
        const std::string DULL_WHITE = "\033[47m";
        
        const std::string BRIGHT_BLACK = "\033[100m";
        const std::string BRIGHT_RED = "\033[101m";
        const std::string BRIGHT_GREEN = "\033[102m";
        const std::string BRIGHT_YELLOW = "\033[103m";
        const std::string BRIGHT_BLUE = "\033[104m";
        const std::string BRIGHT_MAGENTA = "\033[105m";
        const std::string BRIGHT_CYAN = "\033[106m";
        const std::string BRIGHT_WHITE = "\033[107m";
        
        const std::string NONE = "";
    } // namespace BG
    
    namespace STYLE
    {
        const std::string BOLD = "\033[1m";
        const std::string UNDERLINE = "\033[4m";
        const std::string REVERSE = "\033[7m";
        const std::string STRIKETHROUGH = "\033[9m";
        const std::string DIM = "\033[2m";
        const std::string ITALIC = "\033[3m";
        const std::string BLINK = "\033[5m";
        const std::string HIDDEN = "\033[8m";

        const std::string NONE = "";
    } // namespace STYLE
    

    const std::string RESET = "\033[0m";

    //* Function to get ANSI code sequence for string
    std::string getANSICode(const std::string& str, const std::string& fgColor, const std::string& bgColor, const std::string& style);
    
} // namespace UI


#endif