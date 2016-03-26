#include "ControlParams.h"
int ControlParams::getMaxSpeed(){

  return MAX_SPEED;
}

ControlParams::ControlParams(int spd, int ang){
  this->currSpeed = spd;
  this->angle = ang;
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

