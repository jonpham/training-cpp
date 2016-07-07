//
// Created by Jonathan Pham on 6/21/16.
//

#include "CommandLineInterface.h"

CommandLineInterface::CommandLineInterface() {
  displayCliIntroduction();
}

CommandLineInterface::CommandLineInterface(Menu* menu) : 
  p_menu(menu)
{
  displayCliIntroduction();
  p_menu->displayUsageText();
}

void CommandLineInterface::displayTopMenu() {
    std::string user_input = this->getUserInput();
    std::cout << "User Input: " << user_input << std::endl;
    return;
}

std::string CommandLineInterface::getUserInput() {
    return std::string("EMPTY");
}

void CommandLineInterface::processMenuItem(){}

void CommandLineInterface::displayCliIntroduction(){
  std::cout << "\nHello, This is the C++ Training Repository for BAE P&S!" << std::endl;

  std::stringstream introduction_strm;

  introduction_strm << "############################################################\n"
                    << "# This program is provided as an example for C++ projects  #" << std::endl
                    << "# for individuals to test out C++ methods / designs with a #" << std::endl
                    << "# simple interface and test structures. It is additionally #" << std::endl
                    << "# used as a training example for Atlassian productivity    #" << std::endl
                    << "# tools (JIRA,Confluence,Bitbucket). See the BAE P&S SW    #" << std::endl
                    << "# functional Confluence Space for more information.        #" << std::endl
                    << "############################################################\n";

  introduction_strm << "############################################################\n"
                    << "# The program displays a menu to execute sub-applications  #" << std::endl
                    << "# on the command line. These are the true behavior of the  #" << std::endl
                    << "# program. New 'menu items' can be derived and used to     #" << std::endl
                    << "# extend the program.                                      #" << std::endl
                    << "############################################################\n";

  std::cout << introduction_strm.str();
  return;
}


