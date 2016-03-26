#ifndef SONAR_TASK_H
#define SONAR_TASK_H

#include "task.h"
class SonarTask: public Task{
  private:
        // TODO:
        /*
         * Specify a mechanism of storing the data
         * 
         */
         float distance;
  public:
        void init(); 
        void call(); 

        float getDistance();
};

#endif
