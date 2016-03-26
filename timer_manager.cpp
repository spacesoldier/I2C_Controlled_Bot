#include "Arduino.h"
#include "timer_manager.h"
TimerManager::TimerManager(Timer* newTimer){
  this->timer = newTimer;
  
}
void TimerManager::increment (){
  curr_time = millis();
  timer -> call(curr_time);
  
  
 }
void TimerManager::init(){
  this->timer->init(millis());
  
}

