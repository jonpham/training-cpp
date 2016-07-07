#include <iostream>

#include "cli_library/CommandLineInterface.h"

int main() {

  static bool programActive{true};
  int ret_code{0};

  // Instantiate Top-Level Objects
  std::unique_ptr<Menu> cli_menu(new Menu());
  std::unique_ptr<CommandLineInterface> cli(new CommandLineInterface(cli_menu.get()));

  // Run Console Application
  while (programActive) {
    cli->displayTopMenu();
  }
    
  return ret_code;
}