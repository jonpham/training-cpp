//
// Created by Jonathan Pham on 6/21/16.
//

#include "sample_static_lib/static_classes.h"
#include "sample_shared_lib/shared_classes.h"

void ShellInterface::displayTopMenu() {
    std::string user_input = this->getUserInput();
    std::cout << user_input << std::endl;
    return;
}

std::string ShellInterface::getUserInput() {
    return std::string("EMPTY");
}

int Menu::registerMenuItem(std::shared_ptr<IMenuItem>& menu_item) {
    m_menuList.push_back(menu_item);
    return 1;
}

int Menu::initializeMenu() {
    std::shared_ptr<IMenuItem> menu_item1(new SayHello);
    this->registerMenuItem(menu_item1);
    return 1;
}
