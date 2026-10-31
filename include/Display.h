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

void setupDisplay();
//void printText(const uint8_t chars[], uint8_t length);
void displayPassword(const uint8_t password[]);