//
// Created by rothnald on 7/3/18.
//

#ifndef MAINEVENTHANDLER_H
#define MAINEVENTHANDLER_H

#include "IApplicationEventHandler.h"

class MainEventHandler : public IApplicationEventHandler
{
public:
    bool KeyDown = false;
    MainEventHandler();

    virtual void OnKeyDown(unsigned int keyCode, bool isRepeat);
    virtual void OnKeyUp(unsigned int keyCode, bool isRepeat);
};

#endif //MAINEVENTHANDLER_H
