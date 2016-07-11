//
// Created by Jonathan Pham on 6/27/16.
//

#include "TestCommandLineInterface.h"

using ::testing::Return;

/* ####### TEST DEFINITION ####### */
TEST_F(TestCommandLineInterfaceBase,IntroductoryText)
{
  testing::internal::CaptureStdout();
  CommandLineInterface uut_Cli;
  uut_Cli.setInputBehavior(p_mock_input);
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("C++"));
  ASSERT_THAT(output,::testing::HasSubstr("training"));
}

TEST_F(TestCommandLineInterface,DisplayMenu)
{
  // Setup
  EXPECT_CALL(mock_input,displayInputRequest())
    .WillOnce(Return("Please enter input here:"));
    
  testing::internal::CaptureStdout();
  // Test Function
  uut_Cli.displayTopMenu();
  // Validate Results
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("[0]"));
  ASSERT_THAT(output,::testing::HasSubstr("User Input:"));
}

TEST_F(TestCommandLineInterface,GetUserInput){
  /* Purpose of the getUserInput Method is to present User with a Prompt for options. Accept their response.
   * and return the response as a string. 
   */ 
  // Setup

  // Set Return Expectations:
  EXPECT_CALL(mock_input,displayInputRequest())
    .WillOnce(Return("Please enter input here:"));

  // Test Function
  std::string input = uut_Cli.getUserInput();

  // Validate Results
  ASSERT_THAT(input,::testing::HasSubstr("Please enter"));
}

// Use Google Mock to Fake User Input. 

//### Test Fixture Definition ###
void TestCommandLineInterface::SetUp() {
  uut_Cli.setInputBehavior(p_mock_input);
}

void TestCommandLineInterface::TearDown() {

}
