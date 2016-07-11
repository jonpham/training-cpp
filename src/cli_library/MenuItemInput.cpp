// 'MenuItemInput' Behavior
// Created by Jonathan Pham on 6/21/16.
//

#include "MenuItemInput.h"

std::string MenuItemInput::requestInput() 
{
  // String Return
  std::string ret_string;
  std::getline(std::cin,ret_string);

  return ret_string;
}

std::string MenuItemInput::displayInputRequest()
{
  // Show Prompt Option
  std::cout << "\n> ";
  std::string user_input=this->requestInput();

  return user_input;
}
