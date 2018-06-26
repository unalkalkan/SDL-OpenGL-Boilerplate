#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL2/SDL.h>
#include <iostream>

class Application 
{
public:
    Application();
    int Init(const char* title, int width, int height);
    void Update();
    void Destroy();

private:
    SDL_Window *window; 
    SDL_Event e;
    bool quit = false;
};

#endif