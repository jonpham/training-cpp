#include <iostream>


#include "sample_static_lib/static_classes.h"
#include "sample_shared_lib/shared_classes.h"

int main() {
    std::cout << "Hello, This is the C++ Training Repository for BAE P&S!" << std::endl;
    std::unique_ptr<Menu> menu(new Menu);
    std::unique_ptr<ShellInterface> command_line(new ShellInterface());


    int ret_code;

    ret_code = menu->initializeMenu();
    command_line->displayTopMenu();

    return ret_code;
}