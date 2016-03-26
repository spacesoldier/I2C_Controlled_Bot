#ifndef COMMAND_TASK_H
#define COMMAND_TASK_H

#include <ArduinoJson.h>
#include <Arduino.h>
#include <Wire.h>
#include "task.h"

#include "ControlParams.h"

class CommandTask: public Task{

  private:
    //JSON object which contains the current command structure
    StaticJsonBuffer<200> jsonBuffer;
    JsonObject& root = jsonBuffer.createObject();
    ControlParams params;
    
  public:
    
    void init();
    void call();

    void setNewSpeed(int newSpeed);
    
};

#endif
