/**
 * @file main.cpp
 * @brief Main code
 * 
 * This game is part of a bigger escape room in organizing
 * for the birthday present of my partner, and introducing 
 * the correct sequence (which the player should deduce from
 * other puzzles not present on this repo) will grant with the
 * lock password for the last batch of presents.
 * 
 * If the correct sequence, that plays a basic version of the 
 * Happy Birthday song is introduced, the device will return a
 * message that includes the 4 digit lock password, and plays
 * an improved Happy Birthday melody.
 * 
 * @author https://github.com/Violeta-Tejera
 */

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