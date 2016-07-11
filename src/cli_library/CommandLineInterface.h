//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
#define CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <memory>

#include "CliMenu.h"

class CommandLineInterface
{
public:
  CommandLineInterface();
  CommandLineInterface(InputBehavior* input_behavior);
  CommandLineInterface(Menu* menu,InputBehavior* input_behavior);
  void displayTopMenu();
  std::string getUserInput();
  void setInputBehavior(InputBehavior* input_behavior);
  void setMenu(Menu* menu);
protected:
  void displayCliIntroduction();
  void processMenuItem(std::string user_input);
private:
  // Pointer Storage
  Menu* p_menu; // If Menu Is prexisting
  std::unique_ptr<Menu> up_menu; // Otherwise

  InputBehavior* p_inputBehavior; 

};



#endif //CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
