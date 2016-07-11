//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_INPUTBEHAVIOR_H_
#define CTA_CLI_LIBRARY_INPUTBEHAVIOR_H_

#include <iostream>
#include <string>
#include <stdexcept>
#include <functional>
#include <vector>

typedef std::function<void()> VoidCallback;
typedef std::vector<VoidCallback> VoidCallbackVector;

class InputBehavior {
public :
  virtual std::string requestInput()=0;
  virtual std::string displayInputRequest()=0;
  virtual void executeCallbacks();
  virtual int addCallback(VoidCallback);
  virtual ~InputBehavior(){};
protected : 
  VoidCallbackVector m_callbackVector;
};



#endif //CTA_CLI_LIBRARY_INPUTBEHAVIOR_H_
