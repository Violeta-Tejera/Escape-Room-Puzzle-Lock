#include "Sequence.h"

const int LED_PIN = 10;

int currentPosition = 0;

void setupSequence(){
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
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

    if(keyPressed != SEQUENCE[currentPosition]){
        resetGame(true);
        return false;
    }

    currentPosition++;
    digitalWrite(LED_PIN, HIGH);
    Serial.println("True");

    if(currentPosition == SEQUENCE_LENGTH){
        resetGame(false);
        Serial.println("Sequence over");
        return true;
    }

    return false;
}