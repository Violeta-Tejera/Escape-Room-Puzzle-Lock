
#include <Arduino.h>
#include "Buttons.h"
#include "Buzzer.h"
#include "Sequence.h"

const int buttonPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int buzzerPin = 11;

int value = 0;

void setup(){
  setupButtons();
  setupBuzzer();
  setupSequence();
}
 
void loop(){
  bool sequenceEnded = false;
  int buttonPressed = 0;
  
  while(!sequenceEnded){
    buttonPressed = readButtons();

    if(buttonPressed != BUTTON_COUNT-1){
      playNote(buttonPressed);
    }

    sequenceEnded = checkSequence(buttonPressed);
  }
}