// Tests for InputBehavior Class
// Created by Jonathan Pham
//

#include "TestUserInput.h"

namespace {
  void sayHello(){
    std::cout << "Exit World!" << std::endl;
  };  
}

/* ####### TEST DEFINITION ####### */
TEST_F(TestUserInput,CallbackConstructor){
  // Setup
  std::function<void()> test_callback=std::bind(&sayHello);

  // UUT Definitions
  DummyUserInput uut_UserInput(test_callback);
  ASSERT_EQ(1,uut_UserInput.getCallbackVectorSize());
}

TEST_F(TestUserInput,requestInput){
  // UUT Definitions
  DummyUserInput uut_UserInput;
  ASSERT_EQ("FAKE",uut_UserInput.requestInput());
}

TEST_F(TestUserInput,displayInputRequest){
  /// Setup
  std::function<void()> test_callback=std::bind(&sayHello);
  std::string returned_input;
  // UUT Definitions
  DummyUserInput uut_UserInput(test_callback);

  // Set Fake User Input
  uut_UserInput.setFakeInput("FAKE");
  // Capture STout
  testing::internal::CaptureStdout();

  /// Test
  returned_input=uut_UserInput.displayInputRequest();
  
  /// Validate Results
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_EQ("FAKE",returned_input);
}

TEST_F(TestUserInput,displayInputRequest_setCallback){
  /// Setup
  std::function<void()> test_callback=std::bind(&sayHello);
  std::string returned_input;
  // UUT Definitions
  DummyUserInput uut_UserInput;
  uut_UserInput.addCallback(test_callback);

 // Set Fake User Input
  uut_UserInput.setFakeInput("exit");
  // Capture STout
  testing::internal::CaptureStdout();

  /// Test
  returned_input=uut_UserInput.displayInputRequest();
  
  /// Validate Results
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("Exit World!"));
}

TEST_F(TestUserInput,displayInputRequest_NoCallbacks){
  /// Setup
  std::string returned_input;
  // UUT Definitions
  DummyUserInput uut_UserInput;

  // Set Fake User Input
  uut_UserInput.setFakeInput("exit");
  /// Test that an Exception is thrown since no callback has been registered.
  ASSERT_EQ("RUNTIME_ERROR",uut_UserInput.displayInputRequest());
}

TEST_F(TestUserInput,displayInputRequest_exit){
  /// Setup
  std::function<void()> test_callback=std::bind(&sayHello);
  std::string returned_input;
  // UUT Definitions
  DummyUserInput uut_UserInput(test_callback);

  // Set Fake User Input
  uut_UserInput.setFakeInput("exit");
  // Capture STout
  testing::internal::CaptureStdout();

  /// Test
  returned_input=uut_UserInput.displayInputRequest();
  
  /// Validate Results
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("Exit World!"));
}

// TEST_F(TestUserInput,displayInputRequest_ExitCaps){
//   /// Setup
//   std::function<void()> test_callback=std::bind(&sayHello);
//   std::string returned_input;
//   // UUT Definitions
//   DummyUserInput uut_UserInput(test_callback);

//   // Set Fake User Input
//   uut_UserInput.setFakeInput("Exit");
//   // Capture STout
//   testing::internal::CaptureStdout();

//   /// Test
//   returned_input=uut_UserInput.displayInputRequest();
  
//   /// Validate Results
//   std::string output = ::testing::internal::GetCapturedStdout();
//   ASSERT_THAT(output,::testing::HasSubstr("Exit World!"));
// }


//### Test Fixture Definition ###
void TestUserInput::SetUp() {
}

void TestUserInput::TearDown() {
}
