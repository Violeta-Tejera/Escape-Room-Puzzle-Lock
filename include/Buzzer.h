#pragma once

#include <Arduino.h>

const int DELAY_TIME = 500;
const int NOTES[] = {440, 466, 262, 294, 330, 349, 392}; // A4, Bb4, C4, D4, E4, F4, G4

void setupBuzzer();
void playNote(int keyPressed);
