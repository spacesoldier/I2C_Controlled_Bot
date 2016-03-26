#ifndef TIMER_H
#define TIMER_H

#include "task.h"
class Timer {
  public: 
    Timer();
    Timer(Task* newTask);
    void init(long curr_time);
  
    virtual void call (long curr_time);
  private: 
    long dt;
    long eventtime ;
    Task* callback;
    long old_time;
  
};

#endif
