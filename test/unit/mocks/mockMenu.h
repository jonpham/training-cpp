// Mock File for CliMenu Test Dummies
// Created by Jonathan Pham
//

#ifndef CTA_TEST_UNIT_MOCKS_CLI_MENU_H_
#define CTA_TEST_UNIT_MOCKS_CLI_MENU_H_

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "cli_library/CliMenu.h"

class mockMenu : public Menu {
public:
  MOCK_METHOD0( loadMenuItems, int ());
  MOCK_METHOD0( displayUsageText, void ());
  MOCK_METHOD0( displayMenu, void ());
  MOCK_METHOD0( getNumMenuItems, int ());
  MOCK_METHOD1( getMenuItem, IMenuItem* (uint));
};

#endif // CTA_TEST_UNIT_MOCKS_CLI_MENU_H_