#include "Application.h"

Application::Application() { }

int Application::Init(const char* title, int width, int height)
{
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        title,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        width,
        height,
        SDL_WINDOW_OPENGL
    );

    if(window == NULL)
    {
        std::cout << "Couldn't create window!" << std::endl;
        return 1; // Error
    }

    return 0; // Success
}

void Application::Update()
{
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
}

void Application::Destroy()
{
    SDL_Quit();
}