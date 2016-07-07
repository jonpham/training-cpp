//
// Created by Jonathan Pham on 6/21/16.
//

#include "CommandLineInterface.h"

void CommandLineInterface::displayTopMenu() {
    std::string user_input = this->getUserInput();
    std::cout << user_input << std::endl;
    return;
}

std::string CommandLineInterface::getUserInput() {
    return std::string("EMPTY");
}

void CommandLineInterface::processMenuItem(){}


