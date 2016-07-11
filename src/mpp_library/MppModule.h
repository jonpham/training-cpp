// Header File for MaxPairProduct Module Class.
// Derived from MenuItem from CliLibrary
// Created by Jonathan Pham.

#ifndef CTA_MPP_LIBRARY_MAXPAIRPRODUCT_MODULE_H_
#define CTA_MPP_LIBRARY_MAXPAIRPRODUCT_MODULE_H_


#include "cli_library/MenuItem.h"
#include "cli_library/MenuItemInput.h"
#include "MaxPairProduct.h"

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <memory>
#include <stdexcept>

class MppModule : public IMenuItem {
public:
  MppModule();
  virtual std::string getDescription();
  virtual void executeModule();
  virtual void setInputBehavior(InputBehavior* input_behavior);
  // Module Specific Behavior
  virtual int setDataSetSize(uint set_size);  
  virtual uint getDataSetSize();
  
  virtual std::vector<int> requestDataSet();
  virtual std::vector<int> getDataSet();
  virtual int setDataSet(std::vector<int> dataset);

protected:
  MaxPairProduct m_maxPairedProductCalculator;
private:
  InputBehavior* p_inputBehavior{nullptr}; 
  std::unique_ptr<InputBehavior> up_inputBehavior;
  std::vector<int> m_dataSet;
  uint m_dataSize{0};
};

#endif //CTA_MPP_LIBRARY_MAXPAIRPRODUCT_MODULE_H_
