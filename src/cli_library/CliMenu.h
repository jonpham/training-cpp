//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_CLI_MENU_H_
#define CTA_CLI_LIBRARY_CLI_MENU_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <memory>

#include "UserInput.h"
#include "MenuItem.h"

class Menu {
public:
  // Member Methods
  virtual int loadMenuItems();
  virtual void displayUsageText();
  virtual void displayMenu();
  virtual int getNumMenuItems();
  virtual IMenuItem* getMenuItem(uint item_index);
protected:
  int registerMenuItem(std::shared_ptr<IMenuItem>&);
  std::vector<std::shared_ptr<IMenuItem>> m_menuList;
private:
  bool m_menuInitialized{false};
};

#endif //CTA_CLI_LIBRARY_CLI_MENU_H_
