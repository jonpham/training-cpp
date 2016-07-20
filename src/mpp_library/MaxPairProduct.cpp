// Behavior Implementation for MaxPairProduct Module
// Created by Jonathan Pham on 6/21/16.

#include "MaxPairProduct.h"

int MaxPairProduct::calculate(const std::vector<int>& data_set)
{
  return this->calculateFast(data_set);
}
 
int MaxPairProduct::calculateSlow(const std::vector<int>& data_set)
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
    return -1;
  }
  return product_result;
}
 
int MaxPairProduct::calculateFast(const std::vector<int>& data_set)
{
  if ( validMinMaxDataInput(data_set) && validDataSetSize(data_set) )
  {
    int set_size = data_set.size();
    int max_index1 = -1;
    for (int i = 0; i < set_size; ++i) {
      if ((max_index1 == -1) || (data_set[i] > data_set[max_index1])){
        max_index1 = i;
      } else{}
    }
    int max_index2 = -1;
    for (int j = 0; j < set_size; ++j){
      if ( (j != max_index1) && ( (max_index2 == -1) || (data_set[j] > data_set[max_index2]) ) ) {
        max_index2 = j;
      } else {}
    }
    return ((data_set[max_index1]) * data_set[max_index2]);
  }
  else
  {
    std::string error_msg = "Either the MinMaxDataInput or Data Set Size was outside of constraints.";
    throw std::out_of_range(error_msg);
    return -1;
  }
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