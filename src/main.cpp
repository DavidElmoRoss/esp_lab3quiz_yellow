/*
  Title: Program to make RGB LED YELLOW

  TASK: Modify this code to turn on RED and BLUE and
        then determine which colour is on the LED
*/


#include <Arduino.h>                      //include Arduino library

#define RED_LED 25                        
#define GREEN_LED 26                      
#define BLUE_LED 27                       

void setup()
{
  pinMode(RED_LED, OUTPUT);               
  pinMode(GREEN_LED, OUTPUT);             
  pinMode(BLUE_LED, OUTPUT);              
}

void loop() 
{
  digitalWrite(RED_LED,1);
  digitalWrite(GREEN_LED,1);
  digitalWrite(BLUE_LED,1);
  digitalWrite(RED_LED,0);
  digitalWrite(GREEN_LED,0);
  for(;;);
}