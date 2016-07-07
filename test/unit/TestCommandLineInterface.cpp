//
// Created by Jonathan Pham on 6/27/16.
//

#include "TestCommandLineInterface.h"

/* ####### TEST DEFINITION ####### */
TEST_F(TestCommandLineInterfaceBase,IntroductoryText)
{
  testing::internal::CaptureStdout();
  CommandLineInterface uut_Cli;
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("C++"));
  ASSERT_THAT(output,::testing::HasSubstr("training"));
}


//### Test Fixture Definition ###
void TestCommandLineInterface::SetUp() {

}

void TestCommandLineInterface::TearDown() {

}
