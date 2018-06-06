#include <SDL2/SDL.h>
#include <iostream>

int main()
{
    SDL_Window *window;
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        "SDL2 Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_OPENGL
    );

    if(window == NULL)
    {
        std::cout << "Couldn't create window!" << std::endl;
        return 1;
    }
    SDL_Delay(3000);
    SDL_DestroyWindow(window);

    SDL_Quit();
    
    return 0;
}
