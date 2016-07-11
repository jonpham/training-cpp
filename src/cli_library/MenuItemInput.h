// Class created to have a common input method for all MenuItems requiring console input from user.
// Derived from 'InputBehavior'
// Created by Jonathan Pham

#ifndef CTA_CLI_LIBRARY_MENUITEM_INPUT_H_
#define CTA_CLI_LIBRARY_MENUITEM_INPUT_H_

#include "InputBehavior.h"

class MenuItemInput : public InputBehavior {
public:
  virtual std::string requestInput();
  virtual std::string displayInputRequest();
};


#endif //CTA_CLI_LIBRARY_MENUITEM_INPUT_H_
