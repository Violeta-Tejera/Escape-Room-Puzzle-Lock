
#include <Arduino.h>
#include "Buttons.h"
#include "Buzzer.h"
#include "Sequence.h"
#include "Display.h"

int value = 0;

const uint8_t password[] = {CHAR_2, CHAR_1, CHAR_1, CHAR_0}; // Should you want to use your own password, input it here! :)

void setup(){
  setupButtons();
  setupBuzzer();
  setupSequence();
  setupDisplay();
}
 
void loop(){

  bool sequenceEnded = false;
  int buttonPressed = 0;
  
  while(!sequenceEnded){
    buttonPressed = readButtons();

    if(buttonPressed != buttonCount-1){
      playNote(buttonPressed);
    }

    sequenceEnded = checkSequence(buttonPressed);
  }

  delay(1000);
  displayPassword(password);
  playBdayTune();
}