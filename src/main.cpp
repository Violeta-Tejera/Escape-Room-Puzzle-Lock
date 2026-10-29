
#include <Arduino.h>
#include "Buttons.h"
#include "Buzzer.h"

const int buttonPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int buzzerPin = 11;

int value = 0;
 
void setup(){
  setupButtons();
  setupBuzzer();
  //setupSequence();
}
 
void loop(){
  playNote(readButtons());
}