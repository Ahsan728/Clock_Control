#include <Arduino.h>
#include <SAMD21turboPWM.h>

TurboPWM pwm;
const int ADC_CLK2 = 8;   //       8 is the pin number of mkr board

void setup() 
{
  pwm.setClockDivider(1, true);     // Input clock is divided by 1 and sent to Generic Clock, Turbo is On
  pwm.timer(2, 1, 47, true);       // Timer 1 is set to Generic Clock divided by 1, resolution is 250, normal aka fast aka single-slope PWM
  Serial.begin(9600);
  pwm.analogWrite(ADC_CLK2, 500);
}

void loop() {

}