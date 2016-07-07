#include <iostream>
#include <string>
#include <sstream>

int main() {

	static bool programActive{true};
  int ret_code{0};

	// Introductory Line

	std::cout << "\n\nHello, This is the C++ Training Repository for BAE P&S!" << std::endl;

  std::stringstream introduction_strm;

  introduction_strm	<< "############################################################\n"
  									<< "# This program is provided as an example for C++ projects  #" << std::endl
  									<< "# for individuals to test out C++ methods / designs with a #" << std::endl
    								<< "# simple interface and test structures. It is additionally #" << std::endl
                    << "# used as a training example for Atlassian productivity    #" << std::endl
                    << "# tools (JIRA,Confluence,Bitbucket). See the BAE P&S SW    #" << std::endl
                    << "# functional Confluence Space for more information.        #" << std::endl
    								<< "############################################################\n";
  std::cout << introduction_strm.str();


	while (programActive) {

	}
    
  return ret_code;
}