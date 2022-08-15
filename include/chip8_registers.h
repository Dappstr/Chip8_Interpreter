#ifndef CHIP8_REGISTERS_H
#define CHIP8_REGISTERS_H

#include "config.h"


struct Chip8_registers
{
    u8 registerV[CHIP8_TOTAL_REGISTERS]; //There are 16 8 bit registers referred to as V(x) where x is a hexadecimal digit (0 through F).
    u8 delayTimer, soundTimer;
    u8 SP; //Stack pointer

    u16 I; //The I register is 16 bits and is generally used to store memory addresses, only the lowest (rightmost because of little endian)
    u16 PC; //Program counter
};

#endif