#include "ControlParams.h"
int ControlParams::getMaxSpeed(){

  return MAX_SPEED;
}

ControlParams::ControlParams(){
  this->currSpeed = 0;
  this->angle = 0;
}

ControlParams::ControlParams(int spd, int angl){
  this->currSpeed = spd;
  this->angle = angl;
}

int ControlParams::getCurrSpeed(){
  return this -> currSpeed;
}


int ControlParams::getAngle(){
  return this -> angle;
}


void ControlParams::setCurrSpeed(int newSpeed){
  newSpeed = constrain(newSpeed,0,  MAX_SPEED);//MAX_SPEED should be getting
  this -> currSpeed = newSpeed;
}



void ControlParams::setAngle(int newAngle){
  newAngle=constrain(newAngle, 60, 120);
  this -> angle = newAngle;
}

