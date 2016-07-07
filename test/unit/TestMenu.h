//
// Created by Jonathan Pham on 6/27/16.
//

#ifndef TEST_CPP_PROJECT_CLI_MENU_H
#define TEST_CPP_PROJECT_CLI_MENU_H

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "cli_library/CliMenu.h"

class TestMenuBase : public ::testing::Test {
protected:
  virtual void SetUp(){};
  virtual void TearDown(){};
};

class TestMenu : public TestMenuBase {
protected:
  // Test Dummies

  // UUT Definitions
  Menu uut_Menu;

  virtual void SetUp();
  virtual void TearDown();
};


#endif //TEST_CPP_PROJECT_CLI_MENU_H
