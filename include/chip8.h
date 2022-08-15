#ifndef CHIP8_H
#define CHIP8_H

#include "config.h"
#include "chip8_memory.h"
#include "chip8_registers.h"
#include "chip8_stack.h"

struct Chip8
{
    struct Chip8_memory memory; //Chip8_memory struct object
    struct Chip8_registers registers; //Chip8_registers struct object
    struct Chip8_stack stack; //Chip8_stack struct object
};

#endif