#include "CommandTask.h"

void CommandTask::init(){
  Wire.begin();
}

void CommandTask::call(){
  
  root["speed"] = 0;
  root["angle"] = 0;


  String json;
  
  //root.printTo(Serial);

  root.printTo(json);
  
  Wire.beginTransmission(8); // transmit to device #8
 
  root.prettyPrintTo(json);

  Wire.endTransmission();    // stop transmitting
  //Serial.println("Transmitted");
  if (this->params.getCurrSpeed() == 0){
    this->params.setCurrSpeed(400);
  }
}


void CommandTask::setNewSpeed(int newSpeed){
  this->params.setCurrSpeed(newSpeed);
  
}

