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
  int min_limit{2};
  int max_limit{200000};
  int max_pt=min_limit;
  int min_pt=max_limit; 
  for ( int i = 0; i < data_set.size() ; ++i){
    int current_data=data_set[i];
    if (current_data > max_pt) 
    {
      max_pt=current_data;
    }  
    else if ( current_data < min_pt )
    {
      min_pt=current_data;
    } else {}
  }
  if ((min_pt < min_limit) || (max_pt > max_limit))
  {
    return false;
  }
  else 
  {
    return true;
  }
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