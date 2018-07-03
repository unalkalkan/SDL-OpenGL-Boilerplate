#include <Image.h>
#include "Application.h"

Application::Application() { }

int Application::Init(const char* title, int width, int height)
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

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
    else
    {
        screenSurface = SDL_GetWindowSurface(window);
    }

    return 0; // Success
}

void Application::Run()
{
    while( !APPLICATION_QUIT )
    {
        // Event loop
        ProcessEvents();

        // Update loop
        Update();
    }
}

void Application::ProcessEvents()
{
    while( SDL_PollEvent(&sdlEvent) != 0 )
    {
        if( sdlEvent.type == SDL_QUIT )
        {
            APPLICATION_QUIT = true;
        }
    }
}

// TODO: This is a temprorary variable. Remove it.
Image a("Assets/Images/WhiteSquare16x16.bmp");
void Application::Update()
{
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x00, 0x00, 0x00));
    SDL_BlitSurface(a.SurfaceData, NULL, screenSurface, NULL);
    SDL_UpdateWindowSurface(window);
}

void Application::Destroy()
{
    SDL_DestroyWindow(window);
    SDL_FreeSurface(screenSurface);
    SDL_Quit();
}