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
  // std::regex exit_regex;
  // bool match_regex{false};
  // Show Exit Option
  std::cout << "[exit] : Quit the Application." << std::endl;
  std::string user_input=this->requestInput();

  // try {
  //   std::regex test_regex("EXIT",
  //           std::regex_constants::ECMAScript | std::regex_constants::icase);
  //   match_regex = std::regex_search(user_input,test_regex);
  // } 
  // catch (const std::regex_error& e) {
  //   std::cout << "regex_error caught: " << e.what() << std::endl;
  //   return std::string("REGEX_ERROR");
  // }

  // if (match_regex) {
  if (user_input == "exit"){
    // Execute Callbacks
    try {
      std::cout << "\nExiting..." << std::endl;
      this->executeCallbacks();      
    } catch (const std::runtime_error& runtime_error) {
      std::cerr << "RunTime Error : " << runtime_error.what() << std::endl;
      return std::string("RUNTIME_ERROR");
    }
  } 
  else {
    // std::cout << "userinput != 'exit' or didn't match regex, its : " << user_input << std::endl;
    std::cout << "User has selected option : " << user_input << std::endl;
  }
  return user_input;
}
