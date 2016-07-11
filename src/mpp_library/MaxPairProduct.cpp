// Behavior Implementation for MaxPairProduct Module
// Created by Jonathan Pham on 6/21/16.

#include "MaxPairProduct.h"

int MaxPairProduct::calculate(const std::vector<int>& data_set)
{
  int product_result = 0;
  int n = data_set.size();
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (data_set[i] * data_set[j] > product_result) {
        product_result = data_set[i] * data_set[j];
      }
    }
  }
  return product_result;
}
