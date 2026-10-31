#include "Sequence.h"

#define LED_PIN 10

int currentPosition = 0;

void setupSequence(){
    pinMode(LED_PIN, OUTPUT);
}

void resetGame(bool ledShutdown){
    currentPosition = 0;
    if(ledShutdown){
        digitalWrite(LED_PIN, LOW);
    }
}

bool checkSequence(int keyPressed){
    if(keyPressed == -1){
        return false;
    }

    if(keyPressed != sequence[currentPosition]){
        resetGame(true);
        return false;
    }

    currentPosition++;
    digitalWrite(LED_PIN, HIGH);
   
    if(currentPosition == sequenceLength){
        resetGame(false);
        return true;
    }

    return false;
}