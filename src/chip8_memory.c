#include "chip8_memory.h"
#include <assert.h>

static void chip8IsMemoryInBounds(const int index)
{
    assert(index >= 0 && index < 0xFFF); // Chip8's last memory region goes until 0xFFF (4095 bytes)
}

void chip8MemorySet(struct Chip8_memory* memory, int index, unsigned char value)
{
    chip8IsMemoryInBounds(index);
    memory->memory[index] = value;
}

unsigned char chip8MemoryGet(struct Chip8_memory* memory, int index)
{
    return memory->memory[index];
}