//
// Created by Jonathan Pham on 6/21/16.
//

#include "CliMenu.h"


int Menu::loadMenuItems() {
  if (m_menuInitialized==false) 
  {
    std::shared_ptr<IMenuItem> menu_item1(new SayHello());
    this->registerMenuItem(menu_item1);

    // Ensure this Function will not run again.
    m_menuInitialized = true; 
  } 
  else 
  {
    // Do Nothing
  }

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
}

IMenuItem* Menu::getMenuItem(uint item_index)
{
  try {
    return m_menuList.at(item_index).get();
  }
  catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
    return nullptr;
  }
}