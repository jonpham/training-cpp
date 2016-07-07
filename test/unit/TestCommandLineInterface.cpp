//
// Created by Jonathan Pham on 6/27/16.
//

#include "TestCommandLineInterface.h"

/* ####### TEST DEFINITION ####### */
TEST_F(TestCommandLineInterface,IntroductoryText)
{
  testing::internal::CaptureStdout();
  
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_TRUE(false);
}


//### Test Fixture Definition ###
void TestCommandLineInterface::SetUp() {

}

void TestCommandLineInterface::TearDown() {

}
