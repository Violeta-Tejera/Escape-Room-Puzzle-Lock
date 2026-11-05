/**
 * @file Display.h
 * @brief Display utils
 * 
 * Provides you with macros and functions for
 * initializing and working with the TM1637 display.
 * 
 * After the puzzle is solved, the player will receive
 * a short message congratulating them and providing
 * them with the lock password.
 */

#pragma once

#include "TM1637Display.h"
#include <Arduino.h>

// Aux
#define CHAR_EMPTY 0x00

// Letters
#define CHAR_A  (SEG_A | SEG_B | SEG_C | SEG_E | SEG_F | SEG_G)
#define CHAR_B  (SEG_C | SEG_D | SEG_E | SEG_F | SEG_G)
#define CHAR_C  (SEG_A | SEG_D | SEG_E | SEG_F)
#define CHAR_D  (SEG_B | SEG_C | SEG_D | SEG_E | SEG_G)
#define CHAR_E  (SEG_A | SEG_D | SEG_E | SEG_F | SEG_G)
#define CHAR_F  (SEG_A | SEG_E | SEG_F | SEG_G)
#define CHAR_G  (SEG_A | SEG_C | SEG_D | SEG_E | SEG_F)
#define CHAR_H  (SEG_B | SEG_C | SEG_E | SEG_F | SEG_G)
#define CHAR_I  (SEG_B | SEG_C)
#define CHAR_J  (SEG_B | SEG_C | SEG_D | SEG_E)
#define CHAR_K  (SEG_A | SEG_C | SEG_E | SEG_F | SEG_G)
#define CHAR_L  (SEG_D | SEG_E | SEG_F)
#define CHAR_M  (SEG_A | SEG_C | SEG_E)
#define CHAR_N  (SEG_C | SEG_E | SEG_G)
#define CHAR_O  (SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F)
#define CHAR_P  (SEG_A | SEG_B | SEG_E | SEG_F | SEG_G)
#define CHAR_Q  (SEG_A | SEG_B | SEG_C | SEG_F | SEG_G)
#define CHAR_R  (SEG_E | SEG_G)
#define CHAR_S  (SEG_A | SEG_C | SEG_D | SEG_F | SEG_G)
#define CHAR_T  (SEG_D | SEG_E | SEG_F | SEG_G)
#define CHAR_U  (SEG_B | SEG_C | SEG_D | SEG_E | SEG_F)
#define CHAR_V  (SEG_C | SEG_D | SEG_E)
#define CHAR_W  (SEG_B | SEG_D | SEG_F)
#define CHAR_X  (SEG_B | SEG_C | SEG_E | SEG_F | SEG_G)
#define CHAR_Y  (SEG_B | SEG_C | SEG_D | SEG_F | SEG_G)
#define CHAR_Z  (SEG_A | SEG_B | SEG_D | SEG_E | SEG_G)

// Digits
#define CHAR_0  (SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F)
#define CHAR_1  (SEG_B | SEG_C)
#define CHAR_2  (SEG_A | SEG_B | SEG_D | SEG_E | SEG_G)
#define CHAR_3  (SEG_A | SEG_B | SEG_C | SEG_D | SEG_G)
#define CHAR_4  (SEG_B | SEG_C | SEG_F | SEG_G)
#define CHAR_5  (SEG_A | SEG_C | SEG_D | SEG_F | SEG_G)
#define CHAR_6  (SEG_A | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G)
#define CHAR_7  (SEG_A | SEG_B | SEG_C)
#define CHAR_8  (SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F | SEG_G)
#define CHAR_9  (SEG_A | SEG_B | SEG_C | SEG_D | SEG_F | SEG_G)

/**
 * @brief Setup function for the display component.
 * 
 * This function sets the display brightness at 3 (it can be a
 * value from 0 to 7: 0 being the lowest and 7 the highest) 
 * and turns it on.
 * 
 * There's no need to set the pins as I/O manually because we
 * are already instantiating a TM1637Display object.
 * 
 * It ought to be called in the setup() main.cpp function.
 */
void setupDisplay();

/**
 * @brief Printer function for the display component.
 * 
 * This function prints a given string of up to 4 characters
 * on the display. 
 * 
 * @param Array of uint8_t chars 
 * @param int with the string length
 */
void printText(const uint8_t chars[], uint8_t length);

/**
 * @brief Function that displays the puzzle password.
 * 
 * This function will be called in main.cpp when the player
 * solves the puzzle, printing a short message and the lock
 * password afterwards.
 * 
 * @param Array of uint8_t chars
 */
void displayPassword(const uint8_t password[]);