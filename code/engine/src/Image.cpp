//
// Created by rothnald on 6/26/18.
//

#include <Image.h>
#include <iostream>

Image::Image(const char *filePath)
{
    Path = filePath;
    LoadBMP();
}
Image::~Image()
{
    SDL_FreeSurface(SurfaceData);
    SurfaceData = nullptr;
}
void Image::LoadBMP()
{
    SurfaceData = SDL_LoadBMP(Path);
    if(SurfaceData == NULL)
    {
        std::cout << "Error while loading image : " << Path << ", Error : " <<  SDL_GetError() << std::endl;
    }
}