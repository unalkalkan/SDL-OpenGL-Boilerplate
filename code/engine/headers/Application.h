#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL2/SDL.h>
#include <iostream>

class Application 
{
public:
    Application();
    int Init(const char* title, int width, int height);
    void Run();
    void Update();
    void ProcessEvents();
    void Destroy();

private:
    SDL_Window *window;
    SDL_Surface *screenSurface;
    SDL_Event sdlEvent;
    bool APPLICATION_QUIT = false;
};

#endif