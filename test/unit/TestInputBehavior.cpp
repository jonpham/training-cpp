// Tests for InputBehavior Class
// Created by Jonathan Pham
//

#include "TestInputBehavior.h"

namespace {
  void sayHello(){
    std::cout << "Hello, World!" << std::endl;
  };  
}

/* ####### TEST DEFINITION ####### */
TEST_F(TestInputBehavior,requestInput){
  ASSERT_EQ("DUMMY_INPUT",uut_InputBehavior.requestInput());
}

TEST_F(TestInputBehavior,displayInputRequest){
  ASSERT_EQ("DUMMY_INPUT_REQUEST",uut_InputBehavior.displayInputRequest());
}

TEST_F(TestInputBehavior,addCallback){
  // Setup
  std::function<void()> test_callback=std::bind(&sayHello);
  // Test Function
  uut_InputBehavior.addCallback(test_callback);

  // Assertions
  ASSERT_EQ(1,uut_InputBehavior.getCallbackVectorSize());
}

TEST_F(TestInputBehavior,executeCallbacks){
  // Setup
  std::function<void()> test_callback=std::bind(&sayHello);
  uut_InputBehavior.addCallback(test_callback);

  testing::internal::CaptureStdout();

  // Test Function
  uut_InputBehavior.executeCallbacks();
  
  // Validate Results
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("Hello, World!"));
}



//### Test Fixture Definition ###
void TestInputBehavior::SetUp() {
}

void TestInputBehavior::TearDown() {

}
