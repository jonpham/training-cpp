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
  void processMenuItem(std::string user_input);
protected:
  void displayCliIntroduction();
private:
  // Pointer Storage
  Menu* p_menu{nullptr}; // If Menu Is prexisting
  std::unique_ptr<Menu> up_menu; // Otherwise
  bool checkMenuPointer();
  bool m_menuSet{false};

  InputBehavior* p_inputBehavior{nullptr}; 
  bool checkInputPointer();
  bool m_inputSet{false};

};



#endif //CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
