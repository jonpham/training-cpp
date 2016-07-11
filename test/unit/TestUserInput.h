// Test Header for InputBehavior Class
// Created by Jonathan Pham
//

#ifndef TEST_CPP_PROJECT_USER_INPUT_H_
#define TEST_CPP_PROJECT_USER_INPUT_H_

#include "gtest/gtest.h"
#include "gmock/gmock.h"
// UUT Include
#include "cli_library/UserInput.h"

class DummyUserInput : public UserInput {
public:
  DummyUserInput(){};
  DummyUserInput(VoidCallback cb) : UserInput(cb){}

  virtual std::string requestInput(){
    return m_fakeInput;
  };

  uint getCallbackVectorSize(){
    return InputBehavior::m_callbackVector.size();
  }

  void setFakeInput(std::string input){
    m_fakeInput = input;
    return;
  }

protected:
  std::string m_fakeInput{"FAKE"};

};

class TestUserInput : public ::testing::Test {
protected:
  virtual void SetUp();
  virtual void TearDown();
};


#endif //TEST_CPP_PROJECT_USER_INPUT_H_
