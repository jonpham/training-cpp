//
// Created by Jonathan Pham on 6/27/16.
//

#include "TestMenu.h"

/* ####### TEST DEFINITION ####### */
TEST_F(TestMenu,UsageText)
{
  // Setup 
  testing::internal::CaptureStdout();
  Menu uut_Menu;
  
  // Test Action
  uut_Menu.displayUsageText();
  
  // Verification
	std::string output = ::testing::internal::GetCapturedStdout();

  ASSERT_THAT(output,::testing::HasSubstr("[1]"));
  ASSERT_THAT(output,::testing::HasSubstr("[exit]"));
}


//### Test Fixture Definition ###
void TestMenu::SetUp() {

}

void TestMenu::TearDown() {

}
