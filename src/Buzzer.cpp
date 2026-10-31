#include "Buzzer.h"

#define BUZZER_PIN 11

void setupBuzzer(){
    pinMode(BUZZER_PIN, OUTPUT);
}

void playNote(int keyPressed){
    if(keyPressed == -1){
        return;
    }

    tone(BUZZER_PIN, notes[keyPressed]);
    delay(delayTime);
    noTone(BUZZER_PIN);
}

void playBdayTune(){
    for(int i = 0; i < noteCount; i++){
        tone(BUZZER_PIN, melody[i], durations[i]);
        delay(durations[i] * 1.3);
        noTone(BUZZER_PIN);
    }
}