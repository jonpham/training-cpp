//
// Created by Jonathan Pham on 6/21/16.
//

#include "UserInput.h"

std::string UserInput::requestInput() 
{
  // String Return
  std::string ret_string;
  // Show Exit Option
  std::cout << "[exit] : Quit the Application." << std::endl;
  std::cout << "########################################################################" << std::endl;
  std::cout << "Please enter one of the numbered options above or type 'exit' to quit : ";
  std::getline(std::cin,ret_string);
  std::cout << "########################################################################" << std::endl;

  if (ret_string == "exit") {
    // Execute Callbacks
    try {
      std::cout << "\nExiting..." << std::endl;
      this->executeCallbacks();      
    } catch (const std::runtime_error& runtime_error) {
      std::cerr << "RunTime Error : " << runtime_error.what() << std::endl;
    }
  } else {}

  return ret_string;
}
