#pragma once

#include <Arduino.h>

const int delayTime = 500;
const int notes[] = {440, 466, 262, 294, 330, 349, 392}; // A4, Bb4, C4, D4, E4, F4, G4


const int melody[] = {
    392, 392, 440, 392, 523, 494,
    392, 392, 440, 392, 587, 523,
    392, 392, 784, 659, 523, 494, 440,
    698, 698, 659, 523, 587, 523
};

const int durations[] = {
    250, 250, 500, 500, 500, 1000,
    250, 250, 500, 500, 500, 1000,
    250, 250, 500, 500, 500, 500, 1000,
    250, 250, 500, 500, 500, 1000
};

const int noteCount = sizeof(melody) / sizeof(melody[0]);

void setupBuzzer();
void playNote(int keyPressed);
void playBdayTune();