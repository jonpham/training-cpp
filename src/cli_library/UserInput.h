//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_USERINPUT_H_
#define CTA_CLI_LIBRARY_USERINPUT_H_

#include "InputBehavior.h"

class UserInput : public InputBehavior {
public:
  virtual std::string requestInput();
};


#endif //CTA_CLI_LIBRARY_USERINPUT_H_
