// Behavior Implementation for MaxPairProduct Module
// 
// Created by Jonathan Pham on 6/21/16.

#include "MppModule.h"

MppModule::MppModule() :
 up_inputBehavior(new MenuItemInput())
{
  this->setInputBehavior(up_inputBehavior.get());
  // Setup Usage / Introductions
  m_menuName="Maximum Product Pair Algorithm Module";
  std::stringstream description_strm;
  description_strm  << "This component of the CLI C++ Training Application" << std::endl
                    << "serves as an example for the BAE P&S Software "     << std::endl
                    << "Development Workflow and involves a simple algorithm" << std::endl
                    << "implementation extending the C++ Command Line Interface." << std::endl;

  m_menuDescription = description_strm.str();
};

void MppModule::setInputBehavior(InputBehavior* input_behavior){
  p_inputBehavior=input_behavior;
}

std::string MppModule::getDescription(){
  return m_menuDescription;
}

// "Main Method"
void MppModule::executeModule(){
  this->requestDataSet();
  std::cout << "The Maximum Pairwise product is : " <<
    m_maxPairedProductCalculator.calculate(getDataSet()) << std::endl;
  return;
}

// User Input Method
std::vector<int> MppModule::requestDataSet(){
  int set_size{-1};
  // Convert 'user_input' to int if possible
  std::cout << "How large is the data set you wish to input [2 -> 2*10^5]? " ;
  while (set_size==-1) // Loop while Set Size Unset
  {
    try {
      set_size = std::stoi(p_inputBehavior->requestInput());
    } catch (const std::invalid_argument& exception) {
      std::cout << "There was a problem processing your input. Please Try again. Error : " << exception.what() << '\n';
    }
  }
  m_dataSize = set_size; // Set Member Variable
  
  std::cout << "Input your data set with only space separators.\n> ";
  std::vector<int> data_set(set_size);
  for (int i = 0; i < set_size; ++i) {
    std::cin >> data_set[i];
  } 
  m_dataSet = data_set;
  return m_dataSet;
  // Ask for Data. 
}

// Mutators / Accessors
int MppModule::setDataSetSize(uint set_size){
  m_dataSize = set_size;
  return 0;
}

uint MppModule::getDataSetSize(){
  return m_dataSize;
}

std::vector<int> MppModule::getDataSet(){
  return m_dataSet;
}

int MppModule::setDataSet(std::vector<int> dataset){
  m_dataSet=dataset;
}

