//
// Created by Jonathan Pham on 6/27/16.
//

#ifndef TEST_CPP_PROJECT_COMMANDLINEINTERFACE_H
#define TEST_CPP_PROJECT_COMMANDLINEINTERFACE_H

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "cli_library/CommandLineInterface.h"
#include "unit/mocks/mockInputBehavior.h"
#include "unit/mocks/mockMenu.h"
#include "unit/mocks/mockMenuItem.h"

class TestCommandLineInterfaceBase : public ::testing::Test {
protected:
  // Test Dummies
  mockInputBehavior mock_input;
  InputBehavior* p_mock_input= &mock_input;

  mockMenu mock_menu;
  Menu* p_mock_menu= &mock_menu;

  mockMenuItem mock_menuItem;
  IMenuItem* p_mock_menuItem = &mock_menuItem;
  
  // UUT Definitions
  // CommandLineInterface uut_Cli;

  virtual void SetUp(){};
  virtual void TearDown(){};
};

class TestCommandLineInterface : public TestCommandLineInterfaceBase {
protected:
  // Test Dummies

  // UUT Definitions
  CommandLineInterface uut_Cli;

  virtual void SetUp();
  virtual void TearDown();
};


#endif //BASE_CPP_PROJECT_TESTCOMMANDLINEINTERFACE_H
