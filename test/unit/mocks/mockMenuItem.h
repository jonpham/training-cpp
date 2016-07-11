// Mock File for MenuItem Test Dummies
// Created by Jonathan Pham
//

#ifndef CTA_TEST_UNIT_MOCKS_MENU_ITEM_H_
#define CTA_TEST_UNIT_MOCKS_MENU_ITEM_H_

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "cli_library/MenuItem.h"

class mockMenuItem : public IMenuItem {
public:
  MOCK_METHOD0(getItemName, std::string ());
  MOCK_METHOD0(getDescription, std::string ());
  MOCK_METHOD0(executeModule, void ());
};

#endif // CTA_TEST_UNIT_MOCKS_MENU_ITEM_H_