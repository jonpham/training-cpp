// Header File for MaxPairProduct Algorithm Class.
// Created by Jonathan Pham on 6/21/16.

#ifndef CTA_MPP_LIBRARY_MAXPAIRPRODUCT_H_
#define CTA_MPP_LIBRARY_MAXPAIRPRODUCT_H_

#include <vector>
#include <stdexcept>

class MaxPairProduct {
public:
  int calculate(const std::vector<int>& data_set);
  int calculateSlow(const std::vector<int>& data_set);
  int calculateFast(const std::vector<int>& data_set);
private: 
  bool validDataSetSize(const std::vector<int>& data_set);
  bool validMinMaxDataInput(const std::vector<int>& data_set);
};

#endif //CTA_MPP_LIBRARY_MAXPAIRPRODUCT_H_
