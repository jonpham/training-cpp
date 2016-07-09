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
  CommandLineInterface(Menu* menu);
  CommandLineInterface();
  void displayTopMenu();
  std::string getUserInput();
protected:
  void displayCliIntroduction();
  void processMenuItem(std::string user_input);
private:
  Menu* p_menu; 
  std::unique_ptr<Menu> up_menu;
};



#endif //CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
