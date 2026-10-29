
#include "Buttons.h"

const int buttonPins[BUTTON_COUNT] = {2, 3, 4, 5, 6, 7, 8, 9};


void setupButtons(){
    for(int i = 0; i < BUTTON_COUNT; i++){
        pinMode(buttonPins[i], INPUT);
    }
}

int readButtons(){
    for(int i = 0; i < BUTTON_COUNT; i++){
        if(digitalRead(buttonPins[i]) == HIGH){
            return i;
        }
    }

    return -1;
}
