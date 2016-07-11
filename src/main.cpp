#include <iostream>

#include "cli_library/CommandLineInterface.h"

int main() {

  static bool programActive{true};
  int ret_code{0};
  int loop_counter{0};

  // Create Lambda Function Method for Program Exit
  std::function<void()> exitMethod = [&](){ programActive=false; };

  // Instantiate Top-Level Objects
  // std::unique_ptr<UserInput> cli_user_input(new UserInput(exitMethod));
  std::unique_ptr<UserInput> cin_input(new UserInput(exitMethod));
  std::unique_ptr<Menu> cli_menu(new Menu());
  std::unique_ptr<CommandLineInterface> cli(new CommandLineInterface(cli_menu.get(),cin_input.get()));

  // Run Console Application
  while (programActive && (loop_counter < 5)) {
    cli->displayTopMenu();
    // std::string user_input = cli->getUserInput();
    // std::cout << "User Input: " << user_input << std::endl;
    // cli->processMenuItem(user_input);
    loop_counter++;
  }
    
  return ret_code;
}