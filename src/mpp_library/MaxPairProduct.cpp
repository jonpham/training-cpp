// Behavior Implementation for MaxPairProduct Module
// Created by Jonathan Pham on 6/21/16.

#include "MaxPairProduct.h"

int MaxPairProduct::calculate(const std::vector<int>& data_set)
{
  int product_result = 0;
  if ( validMinMaxDataInput(data_set) && validDataSetSize(data_set) )
  {
    // Algorithm
    int n = data_set.size();
    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        if (data_set[i] * data_set[j] > product_result) {
          product_result = data_set[i] * data_set[j];
        }
      }
    }
  }
  else 
  {
    std::string error_msg = "Either the MinMaxDataInput or Data Set Size was outside of constraints.";
    throw std::out_of_range(error_msg);
  }

  return product_result;
}

bool MaxPairProduct::validMinMaxDataInput(const std::vector<int>& data_set)
{
  int max_pt{2};
  int min_pt{200000}; 
  for ( int i = 0; i < data_set.size() ; ++i){
    break;
  }
  return true;
}

bool MaxPairProduct::validDataSetSize(const std::vector<int>& data_set)
{
  int max_n=100000;
  if (data_set.size() > max_n){
    return false;
  }
  else{
    return true;
  }
}