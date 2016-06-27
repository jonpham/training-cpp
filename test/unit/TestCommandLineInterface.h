//
// Created by Jonathan Pham on 6/27/16.
//

#ifndef TEST_CPP_PROJECT_COMMANDLINEINTERFACE_H
#define TEST_CPP_PROJECT_COMMANDLINEINTERFACE_H

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "sample_static_lib/static_classes.h"

class TestCommandLineInterface : public ::testing::Test {
protected:
    virtual void SetUp();
    virtual void TearDown();
};


#endif //BASE_CPP_PROJECT_TESTCOMMANDLINEINTERFACE_H
