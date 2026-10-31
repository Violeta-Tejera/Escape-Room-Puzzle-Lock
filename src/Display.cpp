#include "Display.h"

#define CLK_PIN 12
#define DIO_PIN 13

TM1637Display display(CLK_PIN, DIO_PIN);

const uint8_t done[] = {
    CHAR_D, CHAR_O, CHAR_N, CHAR_E
};

void setupDisplay() {
    display.setBrightness(3, true);
    display.clear();
}

void printText(const uint8_t chars[], uint8_t length){
    uint8_t segments[4] = {
        CHAR_EMPTY, CHAR_EMPTY, CHAR_EMPTY, CHAR_EMPTY
    };

    for(uint8_t i = 0; i < length && i < 4; i++){
        segments[i] = chars[i];
    }

    display.setSegments(segments);
}

void displayPassword(const uint8_t password[]){
    const uint8_t nice[] = {CHAR_N, CHAR_I, CHAR_C, CHAR_E};
    const uint8_t bday[] = {CHAR_B, CHAR_D, CHAR_A, CHAR_Y};
    const uint8_t pass[] = {CHAR_P, CHAR_A, CHAR_S, CHAR_S};
    const uint8_t word[] = {CHAR_W, CHAR_O, CHAR_R, CHAR_D};
    const uint8_t is[]   = {CHAR_EMPTY, CHAR_I, CHAR_S, CHAR_EMPTY};

    printText(nice, 4);
    delay(1500);
    display.clear();
    delay(500);

    printText(bday, 4);
    delay(1000);
    display.clear();
    delay(500);

    printText(pass, 4);
    delay(1000);
    display.clear();
    delay(500);

    printText(word, 4);
    delay(1000);
    display.clear();
    delay(500);

    printText(is, 4);
    delay(1000);
    display.clear();
    delay(500);

    printText(password, 4);
}