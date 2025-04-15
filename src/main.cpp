#include <iostream>
#include "ui/ansi.h"
#include "ui/text.h"
#include "ui/color.h"

using namespace std;

int main()
{
    UI::Text text("Talha Ahmad", UI::ColorProperty(UI::FGColor::LIGHT_RED));

    text.display(true);

    return 0;
}

/*

src/ui/ansi.cpp:119:17: error: default argument given for parameter 3 of 'std::string UI::generateAnsiCode(const std::string&, FGColor, BGColor, Style)' [-fpermissive]
  119 |     std::string generateAnsiCode(const std::string &text, FGColor fg, BGColor bg = BGColor::NONE, Style style = Style::NONE)
      |                 ^~~~~~~~~~~~~~~~
In file included from src/ui/ansi.cpp:1:
src/ui/ansi.h:79:17: note: previous specification in 'std::string UI::generateAnsiCode(const std::string&, FGColor, BGColor, Style)' here
   79 |     std::string generateAnsiCode(const std::string &text, FGColor fg, BGColor bg = BGColor::NONE, Style style = Style::NONE);
      |                 ^~~~~~~~~~~~~~~~
src/ui/ansi.cpp:119:17: error: default argument given for parameter 4 of 'std::string UI::generateAnsiCode(const std::string&, FGColor, BGColor, Style)' [-fpermissive]
  119 |     std::string generateAnsiCode(const std::string &text, FGColor fg, BGColor bg = BGColor::NONE, Style style = Style::NONE)
      |                 ^~~~~~~~~~~~~~~~
src/ui/ansi.h:79:17: note: previous specification in 'std::string UI::generateAnsiCode(const std::string&, FGColor, BGColor, Style)' here
   79 |     std::string generateAnsiCode(const std::string &text, FGColor fg, BGColor bg = BGColor::NONE, Style style = Style::NONE);
      |                 ^~~~~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 2 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
In file included from src/ui/color.cpp:2:
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 3 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
In file included from src/ui/color.cpp:2:
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 3 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
PS D:\Coding Project\TermiChess>


    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
In file included from src/ui/color.cpp:2:
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 3 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
In file included from src/ui/color.cpp:2:
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 3 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
In file included from src/ui/color.cpp:2:
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 3 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 3 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
      |                 ^~~~~~~~~~~~~
src/ui/color.cpp:5:1: error: default argument given for parameter 3 of 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' [-fpermissive]  
    5 | UI::ColorProperty::ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE) : fg(fg), bg(bg), style(style) {}
      | ^~
      | ^~
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
src/ui/color.h:18:17: note: previous specification in 'UI::ColorProperty::ColorProperty(UI::FGColor, UI::BGColor, UI::Style)' here
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
   18 |                 ColorProperty(UI::FGColor fg, UI::BGColor bg = UI::BGColor::NONE, UI::Style style = UI::Style::NONE);
      |                 ^~~~~~~~~~~~~

*/
