//
// Created by Jonathan Pham on 6/21/16.
//

#include "CliMenu.h"

int Menu::loadMenuItems() {
  std::shared_ptr<IMenuItem> menu_item1(new SayHello());
  this->registerMenuItem(menu_item1);
  return 0;
}

int Menu::getNumMenuItems() {
  return m_menuList.size();
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
    std::cout << "[" << i << "] : " << item_name << std::endl;    
  }
  // Show Exit Option
  std::cout << "[exit] : Quit the Application." << std::endl;
  // Launch User Input
}
