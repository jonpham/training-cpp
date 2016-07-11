// Test Implementations for Max Paired Product Module
// Created by Jonathan Pham
//

#include "TestMaxPairedProduct.h"

using ::testing::Return;

/* ####### TEST DEFINITION ####### */
TEST_F(TestMaxPairedProduct,requestDataSet)
{
  testing::internal::CaptureStdout();
  
  // Check for Prompts
  uut_mpp.requestDataSet();

  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("How large is the data set you wish to input"));
  ASSERT_THAT(output,::testing::HasSubstr("Input your data set with only space separators"));
}
  

// Use Google Mock to Fake User Input. 

//### Test Fixture Definition ###
void TestMaxPairedProduct::SetUp() {
}

void TestMaxPairedProduct::TearDown() {
}
