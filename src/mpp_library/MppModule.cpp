// Behavior Implementation for MaxPairProduct Module
// 
// Created by Jonathan Pham on 6/21/16.

#include "MppModule.h"

MppModule::MppModule()
{};

void MppModule::setInputBehavior(InputBehavior* input_behavior){
  p_inputBehavior=input_behavior;
}

std::string MppModule::showDescription(){
  return m_menuDescription;
}

// "Main Method"
void MppModule::executeModule(){
  return;
}

// User Input Method
std::vector<int> MppModule::requestDataSet(){
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

