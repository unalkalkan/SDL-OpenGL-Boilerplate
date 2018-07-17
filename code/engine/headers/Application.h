#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL2/SDL.h>
#include <iostream>
#include <MainEventHandler.h>

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
    SDL_Window *_window;
    SDL_Surface *_screenSurface;
    SDL_Event _sdlEvent;
    MainEventHandler _eventHandler;

    bool APPLICATION_QUIT = false;
};

#endif