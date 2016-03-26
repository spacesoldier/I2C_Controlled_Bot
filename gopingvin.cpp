#include "gopingvin.h"

void GoPingvin::init(){
   pinMode(SPEED_1, OUTPUT);
   pinMode(DIR_1, OUTPUT);
   pinMode(SPEED_2, OUTPUT);
   pinMode(DIR_2, OUTPUT);
   delay(5000);
}

void GoPingvin::go(int newDirection, int speed){
 
  switch ( newDirection ) {
 
    case FORWARD:
        motorDirection_1 = true;
        motorDirection_2 = true;
        break;
    case BACKWARD:
        motorDirection_1 = false;
        motorDirection_2 = false;
        break;        
    case LEFT:
        motorDirection_1 = true;
        motorDirection_2 = false;
        break;
    case RIGHT:
        motorDirection_1 = false;
        motorDirection_2 = true;
        break;    
  }
 
  // Если мы ошиблись с подключением - меняем направление на обратное
  motorDirection_1 = CON_MOTOR1 ^ motorDirection_1;
  motorDirection_2 = CON_MOTOR2 ^ motorDirection_2;
 
  // Поехали! Скорость может меняться в пределах от 0 до 255.
  analogWrite(SPEED_1, speed);
  analogWrite(SPEED_2, speed);
 
  digitalWrite(DIR_1, motorDirection_1);
  digitalWrite(DIR_2, motorDirection_2);  
}


   
