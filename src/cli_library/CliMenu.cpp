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
	std::cout << "\nSelect an Option from the Following Menu Items: \n" << std::endl;
	return;
}

void Menu::displayMenu(){
	for ( uint i=0; i < m_menuList.size(); i++ ){
    std::string item_name = m_menuList[i]->getItemName();
    std::string item_menu_index;
    if (item_name == "exit") {
      item_menu_index = item_name; 
    } else {
      item_menu_index = i;
    }

    std::cout << "[" << item_menu_index << "] : " << item_name << std::endl;
	}
}
