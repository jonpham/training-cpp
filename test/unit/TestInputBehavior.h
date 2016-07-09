// Test Header for InputBehavior Class
// Created by Jonathan Pham
//

#ifndef TEST_CPP_PROJECT_INPUT_BEHAVIOR_H
#define TEST_CPP_PROJECT_INPUT_BEHAVIOR_H

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "cli_library/InputBehavior.h"

class DummyInputBehavior : public InputBehavior {
public:
  virtual std::string requestInput(){
    return std::string("DUMMY_INPUT");
  };

  uint getCallbackVectorSize(){
    return InputBehavior::m_callbackVector.size();
  }    
};

class TestInputBehavior : public ::testing::Test {
protected:
  // Test Dummies

  // UUT Definitions
  DummyInputBehavior uut_InputBehavior;

  virtual void SetUp();
  virtual void TearDown();
};


#endif //TEST_CPP_PROJECT_INPUT_BEHAVIOR_H
