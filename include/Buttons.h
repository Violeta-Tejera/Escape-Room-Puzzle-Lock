/**
 * @file Buttons.h
 * @brief Button utils
 * 
 * Provides you with constants and functions for 
 * initializing and working with buttons.
 * 
 * @author https://github.com/Violeta-Tejera
 */

#pragma once

#include <Arduino.h>

const int buttonCount = 8;

/**
 * @brief Setup function for button components.
 * 
 * This functions sets all 8 button pins up as input pins.
 * It ought to be called in the setup() main.cpp function.
 * 
 * @author https://github.com/Violeta-Tejera
 */
void setupButtons();

/**
 * @brief Button reader.
 * 
 * This function checks which button is being pressed
 * at the moment and returns its index.
 * 
 * Due to gameplay it is not feasible that more than one
 * button could be pressed at the same time.
 * 
 * @returns Integer from 0 to 7 indicating the index of
 * the button that is being pressed. Otherwise, -1 will
 * be returned.
 * 
 * @author https://github.com/Violeta-Tejera
 */
int readButtons();
