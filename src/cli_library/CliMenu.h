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
	// Menu(const &UserInput);
    int loadMenuItems();
    void displayUsageText();
protected:
    int registerMenuItem(std::shared_ptr<IMenuItem>&);
    std::vector<std::shared_ptr<IMenuItem>> m_menuList;
};

#endif //CTA_CLI_LIBRARY_CLI_MENU_H_
