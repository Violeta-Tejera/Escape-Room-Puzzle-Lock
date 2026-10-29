#include "Buzzer.h"

const int BUZZER_PIN = 11;

void setupBuzzer(){
    pinMode(BUZZER_PIN, OUTPUT);
}

void playNote(int keyPressed){
    if(keyPressed == -1){
        return;
    }

    tone(BUZZER_PIN, NOTES[keyPressed]);
    delay(DELAY_TIME);
    noTone(BUZZER_PIN);
}
