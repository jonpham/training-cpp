// Mock File for InputBehavior Test Dummies
// Created by Jonathan Pham
//

#ifndef CTA_TEST_UNIT_MOCKS_INPUT_BEHAVIOR_H_
#define CTA_TEST_UNIT_MOCKS_INPUT_BEHAVIOR_H_

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "cli_library/InputBehavior.h"

class mockInputBehavior : public InputBehavior {
public:
  MOCK_METHOD0( requestInput, std::string ());
  MOCK_METHOD0( displayInputRequest, std::string ());
  MOCK_METHOD0( executeCallbacks, void ());
  MOCK_METHOD1( addCallbackint, int (VoidCallback));
};

#endif // CTA_TEST_UNIT_MOCKS_INPUT_BEHAVIOR_H_