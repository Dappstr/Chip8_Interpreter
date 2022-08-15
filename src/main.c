#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include <SDL.h>
#include <chip8.h>

typedef struct Chip8 Chip8;

int main(int argc, char *argv[])
{
    Chip8 chip8;

    chip8MemorySet(&chip8.memory, 0x400, 'Z');
    printf("%c\n", chip8MemoryGet(&chip8.memory, 0x400));

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = SDL_CreateWindow(
        INTERPRETER_WINDOW_TITLE,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        CHIP8_WINDOW_WIDTH * CHIP8_WINDOW_MULTIPLIER,
        CHIP8_WINDOW_HEIGHT * CHIP8_WINDOW_MULTIPLIER,
        SDL_WINDOW_SHOWN
    );

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_TEXTUREACCESS_TARGET);

    bool isPlaying = true;
    while(isPlaying) {
        SDL_Event event;

        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                isPlaying = false;
                break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);

        SDL_Rect rectangle;

        rectangle.x = 0;
        rectangle.y = 0;
        rectangle.w = 60;
        rectangle.h = 60;

        SDL_RenderDrawRect(renderer, &rectangle);
        SDL_RenderFillRect(renderer, &rectangle);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyWindow(window);

    return 0;
}