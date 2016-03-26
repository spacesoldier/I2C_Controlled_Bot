#ifndef CONTROL_PARAMS_H
#define CONTROL_PARAMS_H

#include "Param.h"
#include <Arduino.h>


class ControlParams: public Param{

      private:
        int currSpeed;
        int angle;
        static const int MAX_SPEED = 400;
      public:
        static int getMaxSpeed();
        ControlParams(int,int);
        int getCurrSpeed();
        int getAngle();
        void setCurrSpeed(int newSpeed); // TODO: check the speed value
        void setAngle(int newAngle); // TODO: check the angle value
        
   };


#endif
