//
// Created by rothnald on 6/26/18.
//

#ifndef IMAGE_H
#define IMAGE_H
#include <SDL_surface.h>

class Image
{
public:
    SDL_Surface* SurfaceData;
    const char* Path;
    Image(const char *filePath);
    ~Image();

private:
    void LoadBMP();
};

#endif //IMAGE_H

enum ImageType
{
    BMP
};