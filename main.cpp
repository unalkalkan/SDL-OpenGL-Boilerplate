#include "Application.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main()
{
    Application application;

    if(application.Init("Title", SCREEN_WIDTH, SCREEN_HEIGHT) == 1)
    {
        return 1;
    }
    application.Run();
    application.Destroy();

    return 0;
}
