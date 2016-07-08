//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_MENUITEM_H_
#define CTA_CLI_LIBRARY_MENUITEM_H_

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <memory>

class IMenuItem {
public:
	virtual std::string getItemName(){return m_menuName;};
  virtual std::string showDescription()=0;
  virtual void executeModule()=0;
protected:
	std::string m_menuDescription{"NoDescription"};
	std::string m_menuName{"NameNotSet"};
};

class SayHello : public IMenuItem 
{
public:
  SayHello();
  virtual std::string showDescription();
  virtual void executeModule();
};


#endif //CTA_CLI_LIBRARY_MENUITEM_H_
