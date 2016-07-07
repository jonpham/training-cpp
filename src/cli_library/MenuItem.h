//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_MENUITEM_H_
#define CTA_CLI_LIBRARY_MENUITEM_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <memory>

class IMenuItem {
public:
    virtual void showDescription()=0;
    virtual void whatever()=0;
};


#endif //CTA_CLI_LIBRARY_MENUITEM_H_
