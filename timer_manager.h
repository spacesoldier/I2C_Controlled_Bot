#ifndef TIMER_MANAGER_H
#define TIMER_MANAGER_H

#include "Arduino.h"
#include "timer.h"
class TimerManager {
private: 
  long curr_time;
  Timer* timer;
public:
  TimerManager(Timer*);
  void increment();
  void init();
};

#endif
