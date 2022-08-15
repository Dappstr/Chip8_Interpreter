#include "chip8_keyboard.h"
#include "assert.h"

static void chip8KeyboardEnsureKeyInbounds(int key){
    assert(key >= 0 && key < CHIP8_TOTAL_KEYS);
}

//map = virtual keyboard, key = physical key on keyboard
int chip8KeyboardMap(const char* map, char key)
{
    for(unsigned int i = 0; i < CHIP8_TOTAL_KEYS; ++i) {
        if(map[i] == key)
            return i;
    }

    return -1;
}

void chip8KeyboardKeyDown(struct Chip8_keyboard* keyboard, int key) {
    keyboard->keyboard[key] = true;
}

void chip8KeyboardKeyUp(struct Chip8_keyboard* keyboard, int key) {
    keyboard->keyboard[key] = false;
}

bool chip8KeyboardIsKeyDown(struct Chip8_keyboard* keyboard, int key) {
    return keyboard->keyboard[key];
}