//
// Created by Jonathan Pham on 6/21/16.
//

#include "CliMenu.h"

int Menu::loadMenuItems() {
    // std::shared_ptr<IMenuItem> menu_item1(new SayHello);
    // this->registerMenuItem(menu_item1);
    return 1;
}

int Menu::registerMenuItem(std::shared_ptr<IMenuItem>& menu_item) {
    m_menuList.push_back(menu_item);
    return 1;
}

void Menu::displayUsageText(){
	std::cout << "\nDisplaying Menu Usage Text." << std::endl;
	return;
}
