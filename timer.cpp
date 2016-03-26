#include "timer.h"
Timer::Timer(){

}
Timer::Timer(Task* newTask){
  this->callback = newTask;
}
void Timer::init(long curr_time){
  this -> old_time = curr_time; /* Присвоение old_time к curr_time */
 }
void Timer:: call (long curr_time){
  this->dt = curr_time - old_time;
  if (dt > this->callback->getInterval()){
      this->callback->call();
  } else{
    
  }
}

