//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_USERINPUT_H_
#define CTA_CLI_LIBRARY_USERINPUT_H_

#include "InputBehavior.h"

// #include <regex>

class UserInput : public InputBehavior {
public:
  UserInput(){};
  UserInput(VoidCallback);
  virtual std::string requestInput();
  virtual std::string displayInputRequest();
};


#endif //CTA_CLI_LIBRARY_USERINPUT_H_
