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

    bool quit = false;
    SDL_Event e;

    // main loop
    while( !quit )
    {
        // Event loop
        while( SDL_PollEvent(&e) != 0 )
        {
            if( e.type == SDL_QUIT )
            {
                quit = true;
            }
        }
    }

    SDL_Quit();
    
    return 0;
}
