//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef BASE_CPP_PROJECT_STATIC_CLASSES_H
#define BASE_CPP_PROJECT_STATIC_CLASSES_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <memory>

class ShellInterface
{
public:
//    ShellInterface(&Menu);
    void displayTopMenu();
protected:
    std::string getUserInput();
    void processMenuItem();
};

class IMenuItem {
public:
    virtual void showDescription()=0;
};

class Menu {
public:
    int initializeMenu();
protected:
    int registerMenuItem(std::shared_ptr<IMenuItem>&);
    std::vector<std::shared_ptr<IMenuItem>> m_menuList;
};

#endif //BASE_CPP_PROJECT_STATIC_CLASSES_H
