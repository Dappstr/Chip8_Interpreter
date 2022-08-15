#ifndef CHIP8_KEYBOARD_H
#define CHIP8_KEYBOARD_H

#include "stdbool.h"
#include "config.h"

/*
Chip8 keyboard layout
1	2	3	C
4	5	6	D
7	8	9	E
A	0	B	F
*/

struct Chip8_keyboard
{
    bool keyboard[CHIP8_TOTAL_KEYS];
};

static void chip8KeyboardEnsureKeyInbounds(int key);

//map = virtual keyboard, key = physical key on keyboard
int chip8KeyboardMap(const char* map, char key);

void chip8KeyboardKeyDown(struct Chip8_keyboard* keyboard, int key);
void chip8KeyboardKeyUp(struct Chip8_keyboard* keyboard, int key);

bool chip8KeyboardIsKeyDown(struct Chip8_keyboard* keyboard, int key);

#endif