#pragma once

#include <Arduino.h>

const int SEQUENCE[] = {
    2, 2, 3, 2, 5, 4, // Happy birthday to you
    2, 2, 3, 2, 6, 5, // Happy birthday to you
    2, 2, 2, 0, 5, 4, 3, // Happy birthday dear name
    1, 1, 0, 5, 6, 5 // Happy birthday to you
};

const int SEQUENCE_LENGTH = sizeof(SEQUENCE);

void setupSequence();
void resetGame(bool ledShutdown);
bool checkSequence(int keyPressed);
