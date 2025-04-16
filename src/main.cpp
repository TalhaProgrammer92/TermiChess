#include <iostream>
#include "ui/ansi.h"
#include "ui/text.h"
#include "ui/color.h"

using namespace std;

int main()
{
  // UI::Text text("I've fixed all bugs", UI::ColorProperty(
  //   UI::FG::BRIGHT_GREEN, UI::BG::NONE, UI::STYLE::BOLD
  // ));

  // cout << text << endl;

  UI::Message message;

  message.addText(UI::Text(
      "Text1 ",
      UI::ColorProperty(
          UI::FG::BRIGHT_RED,
          UI::BG::NONE,
          UI::STYLE::NONE)));
  
  

  return 0;
}
