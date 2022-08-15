#ifndef CHIP8_STACK_H
#define CHIP8_STACK_H

#include "config.h"

struct Chip8;
struct Chip8_stack
{
    u16 stack[CHIP8_TOTAL_STACK_DEPTH];
};

void chip8StackPush(struct Chip8* chip8, u16 value);
u16 chip8StackPop(struct Chip8* chip8);

#endif