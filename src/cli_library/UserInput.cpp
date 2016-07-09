//
// Created by Jonathan Pham on 6/21/16.
//

#include "UserInput.h"

UserInput::UserInput(VoidCallback callback){
  this->addCallback(callback);
}

std::string UserInput::requestInput() 
{
  // String Return
  std::string ret_string;

  std::cout << "########################################################################" << std::endl;
  std::cout << "Please enter one of the numbered options above or type 'exit' to quit : ";
  std::getline(std::cin,ret_string);
  std::cout << "########################################################################" << std::endl;

  return ret_string;
}

std::string UserInput::displayInputRequest()
{
  // Show Exit Option
  std::cout << "[exit] : Quit the Application." << std::endl;
  std::string user_input=this->requestInput();

  if (user_input == "exit") {
    // Execute Callbacks
    try {
      std::cout << "\nExiting..." << std::endl;
      this->executeCallbacks();      
    } catch (const std::runtime_error& runtime_error) {
      std::cerr << "RunTime Error : " << runtime_error.what() << std::endl;
      return std::string("RUNTIME_ERROR");
    }
  } 
  else {}
  return user_input;
}
