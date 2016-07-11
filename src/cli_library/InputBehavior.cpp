//
// Created by Jonathan Pham on 6/21/16.
//

#include "InputBehavior.h"

void InputBehavior::executeCallbacks()
{
  if (m_callbackVector.size() > 0) {
    for (auto& callback : m_callbackVector) {
    callback();
    }  
  } else {
    std::string error_msg = "No Callbacks Found.";
    throw std::runtime_error(error_msg);
  }

  return;
}

int InputBehavior::addCallback(VoidCallback callback)
{
  m_callbackVector.push_back(callback);
  return 0;
}

