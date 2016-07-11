// Test Implementations for Max Paired Product Module
// Created by Jonathan Pham
//

#include <stdlib.h>
#include <vector>
#include <stdexcept>

#include "TestMaxPairedProduct.h"

using ::testing::Return;

/* ####### TEST DEFINITION ####### */
TEST_F(TestMaxPairedProduct,lowNumbers)
{
  // Setup Test Data

  std::vector<int> test_data = {10, 4, 5, 19, 14};
  long long answer = 19*14;
  
  // Test // Verify
  ASSERT_EQ(answer,uut_mppCalculator.calculate(test_data));
}

TEST_F(TestMaxPairedProduct,highNumbers)
{
  // Setup Test Data
  int max_data_range = 200000;
  
  std::vector<int> test_data = {10, 4, 5, max_data_range-10, max_data_range};
  long long answer = (max_data_range-10)*max_data_range;
  int result = uut_mppCalculator.calculate(test_data);
  // Test // Verify
  ASSERT_NE(410065408,result) << "You've hit an integer overflow issue.";
  ASSERT_EQ(answer,result);
}

TEST_F(TestMaxPairedProduct,highDuplicateNumbers)
{
  // Setup Test Data
  int max_data_range = 200000;
  
  std::vector<int> test_data = {10, 4, 5, max_data_range, max_data_range};
  long long answer = max_data_range*max_data_range;
  int result = uut_mppCalculator.calculate(test_data);
  // Test // Verify
  ASSERT_NE(410065408,result) << "You've hit an integer-type overflow issue.";
  ASSERT_EQ(answer,result);
}

TEST_F(TestMaxPairedProduct,ceilingOnNSizeDataset){
  // Setup Test Data
  int max_num_data_pnts = 100000; // 10^5
  int max_data_range = 20;
  // int n = std::rand() % max_num_data_pnts + 2;
  std::vector<int> test_data;
  for (int i = 0; i < max_num_data_pnts+1; ++i) {
    test_data.push_back(rand() % max_data_range);
  }

  ASSERT_THROW(uut_mppCalculator.calculate(test_data),std::out_of_range) << "N is Greater than Allowed.";
}

// Use Google Mock to Fake User Input. 

//### Test Fixture Definition ###
void TestMaxPairedProduct::SetUp() {
}

void TestMaxPairedProduct::TearDown() {
}
