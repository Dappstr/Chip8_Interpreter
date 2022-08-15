#include "chip8_stack.h"
#include "chip8.h"
#include <assert.h>

static void chip8StackInBounds(struct Chip8* chip8)
{
    assert(chip8->registers.SP < CHIP8_TOTAL_STACK_DEPTH);
}

void chip8StackPush(struct Chip8* chip8, u16 value)
{
    chip8StackInBounds(chip8);

    chip8->stack.stack[chip8->registers.SP] = value;
    chip8->registers.SP += 1;
}

u16 chip8StackPop(struct Chip8* chip8)
{
    chip8->registers.SP -= 1;
    chip8StackInBounds(chip8);

    u16 value = chip8->stack.stack[chip8->registers.SP];

    return value;
}
