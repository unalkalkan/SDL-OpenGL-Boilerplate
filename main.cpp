#include "Application.h"

int main()
{
    Application application;

    if(application.Init("Title", 800, 600) == 1)
    {
        return 1;
    }
    application.Update();
    application.Destroy();

    return 0;
}
