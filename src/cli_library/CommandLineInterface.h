//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
#define CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <memory>

class CommandLineInterface
{
public:
//    ShellInterface(&Menu);
    void displayTopMenu();
protected:
    std::string getUserInput();
    void processMenuItem();
};



#endif //CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
