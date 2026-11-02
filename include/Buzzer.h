/**
 * @file Buzzer.h
 * @brief Buzzer utils
 * 
 * Provides you with constants and functions for 
 * initializing and working with the buzzer.
 * 
 * @author https://github.com/Violeta-Tejera
 */

#pragma once

#include <Arduino.h>

const int delayTime = 500;

/* The i-th note on the buttonpad is the i-th note on this array */
const int notes[] = {440, 466, 262, 294, 330, 349, 392}; // A4, Bb4, C4, D4, E4, F4, G4

/* These are the notes for the augmented Happy Bday melody that will be played when the puzzle is solved */
const int melody[] = {
    392, 392, 440, 392, 523, 494,
    392, 392, 440, 392, 587, 523,
    392, 392, 784, 659, 523, 494, 440,
    698, 698, 659, 523, 587, 523
};

/* These are the note durations for the augmented Happy Bday melody that will be played when the puzzle is solved*/
const int durations[] = {
    250, 250, 500, 500, 500, 1000,
    250, 250, 500, 500, 500, 1000,
    250, 250, 500, 500, 500, 500, 1000,
    250, 250, 500, 500, 500, 1000
};

const int noteCount = sizeof(melody) / sizeof(melody[0]);

/**
 * @brief Setup function for the buzzer component.
 * 
 * This functions sets the buzzer pin up as an output pin.
 * It ought to be called in the setup() main.cpp function.
 * 
 * @author https://github.com/Violeta-Tejera
 */
void setupBuzzer();

/**
 * @brief Note player.
 * 
 * This function plays the note corresponding to the button pressed
 * during delayTime milliseconds.
 * 
 * See notes[] for more info.
 * 
 * @param int identifying the key pressed.
 * 
 * @author https://github.com/Violeta-Tejera
 */
void playNote(int keyPressed);

/**
 * @brief Happy B-Day tune player.
 * 
 * Plays an augmented version of the Happy B-Day tune
 * played by the human player. In main.cpp, this tune
 * will be played after the puzzle is completed.
 * 
 * @author https://github.com/Violeta-Tejera
 */
void playBdayTune();