#ifndef CONFIG_H
#define CONFIG_H

typedef unsigned char u8; //8 bit type
typedef unsigned short u16; //16 bit type

#define INTERPRETER_WINDOW_TITLE "Chip8 interpreter"
#define CHIP8_MEMORY_SIZE 4096 //The Chip-8 language is capable of accessing up to 4KB (4,096 bytes) of RAM, from location 0x000 (0) to 0xFFF (4095)
#define CHIP8_WINDOW_WIDTH 64
#define CHIP8_WINDOW_HEIGHT 32
#define CHIP8_WINDOW_MULTIPLIER 10

#define CHIP8_TOTAL_REGISTERS 16
#define CHIP8_TOTAL_STACK_DEPTH 16

#endif