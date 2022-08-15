#include "chip8.h"
#include <memory.h>

void chip8Init(struct Chip8* chip8)
{
    memset(chip8, 0, sizeof(struct Chip8));
}
