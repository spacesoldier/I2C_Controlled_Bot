 #ifndef GOPINGVIN_H
 #define GOPINGVIN_H

#include <Arduino.h>
 
 class GoPingvin {

    private:
        // TODO: place here the constants nobody outside can control
        boolean motorDirection_1, motorDirection_2;
        int CON_MOTOR1   =  0;
        int CON_MOTOR2   =  0;

        // Motor shield использует четыре контакта 4, 5, 6, 7 для управления моторами 
        // 4 и 7 — для направления, 5 и 6 — для скорости
        static const int SPEED_1   =  5 ;
        static const int DIR_1    =    4;
         
        static const int SPEED_2   =   6;
        static const int DIR_2   =    7;
        
    public:
          // TODO: place here the methods that anybody can use outside of this class
       void init();
       /*
        * В функции `go` мы управляем направлением движения и скоростью
        */
       void go(int newDirection, int speed);
      // Возможные направления движения робота
      static const int FORWARD  = 0;
      static const int BACKWARD = 1;
      static const int LEFT   =  2;
      static const int RIGHT   = 3;

  
  }; 

#endif
