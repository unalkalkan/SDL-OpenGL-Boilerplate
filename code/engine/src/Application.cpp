#include <Image.h>
#include "Application.h"

Application::Application() {}

int Application::Init(const char* title, int width, int height)
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    _window = SDL_CreateWindow(
        title,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        width,
        height,
        SDL_WINDOW_OPENGL
    );

    if(_window == NULL)
    {
        std::cout << "Couldn't create window!" << std::endl;
        return 1; // Error
    }
    else
    {
        _screenSurface = SDL_GetWindowSurface(_window);
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
    while( SDL_PollEvent(&_sdlEvent) != 0 )
    {
        switch (_sdlEvent.type)
        {
            case SDL_KEYDOWN:
                _eventHandler.OnKeyDown(_sdlEvent.key.keysym.scancode, _sdlEvent.key.repeat != 0);
                break;
            case SDL_KEYUP:
                _eventHandler.OnKeyUp(_sdlEvent.key.keysym.scancode, _sdlEvent.key.repeat != 0);
                break;
            case SDL_MOUSEBUTTONDOWN:
                break;
            case SDL_MOUSEBUTTONUP:
                break;
            case SDL_MOUSEMOTION:
                break;
            case SDL_QUIT:
                APPLICATION_QUIT = true;
                break;
            default:
                break;
        }
    }
}

// TODO: This is a temprorary variable. Remove it.
Image a("Assets/Images/WhiteSquare16x16.bmp");
void Application::Update()
{
    SDL_FillRect(_screenSurface, NULL, SDL_MapRGB(_screenSurface->format, 0x00, 0x00, 0x00));
    SDL_BlitSurface(a.SurfaceData, NULL, _screenSurface, NULL);
    SDL_UpdateWindowSurface(_window);
}

void Application::Destroy()
{
    SDL_DestroyWindow(_window);
    SDL_FreeSurface(_screenSurface);
    SDL_Quit();
}