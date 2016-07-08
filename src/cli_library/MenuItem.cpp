//
// Created by Jonathan Pham on 6/21/16.
//

#include "MenuItem.h"


SayHello::SayHello()
{
  m_menuName="SayHello";
  std::stringstream description_strm;
  description_strm << "This is Merely a Test Example." << std::endl
        << "Just something to test the other methods." << std::endl;

  m_menuDescription = description_strm.str();
}

std::string SayHello::showDescription()
{
  std::cout << m_menuDescription << std::endl;
  return m_menuDescription;
}

void SayHello::executeModule()
{
  std::cout << "Hello, World!" << std::endl;
  return;
}


