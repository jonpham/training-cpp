// Test Implementations for Max Paired Product Module
// Created by Jonathan Pham
//

#include <stdlib.h>
#include <vector>

#include "TestMaxPairedProduct.h"

using ::testing::Return;

/* ####### TEST DEFINITION ####### */
TEST_F(TestMaxPairedProduct,lowNumbers)
{
  // Setup Test Data
  // int max_num_data_pnts = 10;
  // int max_data_range = 20;
  // int n = std::rand() % max_num_data_pnts + 2;
  // std::vector<int> test_data;
  // for (int i = 0; i < n; ++i) {
  //   test_data.push_back(rand() % max_data_range);
  // }

  std::vector<int> test_data = {10, 4, 5, 19, 14};
  int answer = 19*14;
  
  // Test // Verify
  ASSERT_EQ(answer,uut_mppCalculator.calculate(test_data));
}

TEST_F(TestMaxPairedProduct,highNumbers)
{
  // Setup Test Data
  int max_data_range = 100000;
  
  std::vector<int> test_data = {10, 4, 5, max_data_range-10, max_data_range};
  int answer = (max_data_range-10)*max_data_range;
  
  // Test // Verify
  ASSERT_EQ(answer,uut_mppCalculator.calculate(test_data));
}

// Use Google Mock to Fake User Input. 

//### Test Fixture Definition ###
void TestMaxPairedProduct::SetUp() {
}

void TestMaxPairedProduct::TearDown() {
}
