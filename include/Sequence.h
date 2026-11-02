/**
 * @file Sequence.h
 * @brief Sequence utils
 * 
 * Provides you with macros and functions that model
 * the puzzle behaviour.
 * 
 * This puzzle is based on playing the correct sequence
 * of notes (a basic version of the Happy Birthday song)
 * in order to get the password of a lock.
 * 
 * The player has to get the correct sequence on their
 * own with different puzzles not present on this one.
 * 
 * @author https://github.com/Violeta-Tejera
 */

#pragma once

#include <Arduino.h>

/* This is the button idxs that ought to be pressed by the player in this order */
const int sequence[] = {
    2, 2, 3, 2, 5, 4, // Happy birthday to you
    2, 2, 3, 2, 6, 5, // Happy birthday to you
    2, 2, 2, 0, 5, 4, 3, // Happy birthday dear name
    1, 1, 0, 5, 6, 5 // Happy birthday to you
};

const int sequenceLength = sizeof(sequence) / sizeof(sequence[0]);

/**
 * @brief Setup function for led component.
 * 
 * This function sets the led pin as an output pin. This
 * led is used as a flag for the player to know if they are
 * typing in the correct password or not.
 * 
 * It ought to be called in the setup() main.cpp function.
 * 
 * @author https://github.com/Violeta-Tejera
 */
void setupSequence();

/**
 * @brief Sequence reset function.
 * 
 * This function resets the game, making the sequence checker
 * cursor (currentPosition) go back to its initial position
 * and optionally turning off the led.
 * 
 * @param bool Whether the led should be turned off (player made a mistake/wanted
 * to start over) or on (player won)
 * 
 * @author https://github.com/Violeta-Tejera
 */
void resetGame(bool ledShutdown);

/**
 * @brief Sequence checker function.
 * 
 * This is the most important function for the game logic. It will
 * check if the key pressed is the correct one that should have
 * been pressed or not. 
 * 
 * - If no key was pressed, nothing happens.
 * - If the correct key was pressed, the currentPosition cursor advances
 * to the following position and the led is kept on, indicating the player
 * that they are pressing the correct keys.
 * - If the incorrect key (or the reset one) was pressed, it calls resetGame(true)
 * to reset the entire game, turning the led off.
 * - If the sequence has been completed, the game is reset but the led is kept
 * on, since no mistake has been made.
 * 
 * This function should be called in the void loop() main.cpp function.
 * 
 * @param int identifying the key pressed.
 * @returns true if the correct sequence has been input, false otherwise.
 * 
 * @author https://github.com/Violeta-Tejera
*/
bool checkSequence(int keyPressed);
