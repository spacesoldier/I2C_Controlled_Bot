#include "gopingvin.h"
#include "ControlParams.h"
#include "sonarTask.h"
#include "timer.h"
#include "timer_manager.h"
#include <Wire.h>

GoPingvin MyPin;
Timer mainTimer;
TimerManager mainController(&mainTimer);

void setup() {
  // put your setup code here, to run once:
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  mainController.init();
  MyPin.init();
  Serial.println(ControlParams::getMaxSpeed());
 
}

void loop() {
  mainController.increment();
  
}


void receiveEvent(int howMany) {

  //TODO:
  /*
   * howMany is the length of a string in JSON format
   * you should parse this string into an object here (google: Arduino parse JSON)
   * example message:
   * 
   * { speed:0, angle:0 }
   * 
   * example object:
   * 
   * class ControlParams public Param{
   *    private:
   *      int speed;
   *      int angle;
   *    public:
   *      int getSpeed();
   *      int getAngle();
   *      void setSpeed(); // TODO: check the speed value
   *      void setAngle(); // TODO: check the angle value
   * }
   * 
   */
  while(1< Wire.available()) {
    char c= Wire.read();
    Serial.print(c);
  }
  int x= Wire.read();
  Serial.println(x);
}

