//
// Created by Jonathan Pham on 6/27/16.
//

#include "TestMenu.h"

/* ####### TEST DEFINITION ####### */
TEST_F(TestMenuBase,UsageText)
{
  // Setup 
  testing::internal::CaptureStdout();
  Menu uut_Menu;
  
  // Test Action
  uut_Menu.displayUsageText();
  
  // Verification
	std::string output = ::testing::internal::GetCapturedStdout();

  ASSERT_THAT(output,::testing::HasSubstr("Select"));
}

TEST_F(TestMenuBase,loadMenuItems){
  // Setup 
  Menu uut_Menu;
  
  // Test Action
  ASSERT_EQ(0,uut_Menu.loadMenuItems());
  
  // Verification
  int num_menu_items = uut_Menu.getNumMenuItems();
  ASSERT_GT(num_menu_items,0);
}

TEST_F(TestMenu,MenuItemFormat)
{
  // Setup 
  testing::internal::CaptureStdout();
  
  // Test Action
  uut_Menu.displayMenu();
  
  // Verification
	std::string output = ::testing::internal::GetCapturedStdout();

  ASSERT_THAT(output,::testing::HasSubstr("[0]"));
}

TEST_F(TestMenu,MenuExit)
{
  // Setup 
  testing::internal::CaptureStdout();
  
  // Test Action
  uut_Menu.displayMenu();
  
  // Verification
	std::string output = ::testing::internal::GetCapturedStdout();

  ASSERT_THAT(output,::testing::HasSubstr("[exit]"));
}


//### Test Fixture Definition ###
void TestMenu::SetUp() {
	uut_Menu.loadMenuItems();
}

void TestMenu::TearDown() {

}
