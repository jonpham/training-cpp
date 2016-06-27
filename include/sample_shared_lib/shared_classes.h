//
// Created by Jonathan Pham on 6/21/16.
//

#include "sample_static_lib/static_classes.h"

#ifndef BASE_CPP_PROJECT_SHARED_CLASSES_H
#define BASE_CPP_PROJECT_SHARED_CLASSES_H

class SayHello : public IMenuItem {
public:
    virtual void showDescription();
};

#endif //BASE_CPP_PROJECT_SHARED_CLASSES_H
