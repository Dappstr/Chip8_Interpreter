#ifndef CHIP8_MEMORY_H
#define CHIP8_MEMORY_H

#include "config.h" //Contains memory size for the Chip8
struct Chip8_memory
{
    unsigned char memory[CHIP8_MEMORY_SIZE];
};

static void chip8IsMemoryInBounds(const int index);
void chip8MemorySet(struct Chip8_memory* memory, int index, unsigned char value);
unsigned char chip8MemoryGet(struct Chip8_memory* memory, const int index);

#endif
