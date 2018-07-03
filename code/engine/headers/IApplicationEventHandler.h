//
// Created by rothnald on 7/2/18.
//
#pragma once

#ifndef IAPPLICATIONEVENTHANDLER_H
#define IAPPLICATIONEVENTHANDLER_H

class IApplicationEventHandler
{
public:
    IApplicationEventHandler();
    virtual ~IApplicationEventHandler();

    virtual void OnKeyDown(uint32 keyCode, bool isRepeat) {}
    virtual void OnKeyUp(uint32 keyCode, bool isRepeat) {}
    virtual void OnMouseDown(uint32 mouseDown, uint8 numClicks) {}
    virtual void OnMouseUp(uint32 mouseDown, uint8 numClicks) {}
    virtual void OnMouseMove(int32 mousePosX, int32 mousePosY, int32 deltaX, int32 deltaY) {}
};

#endif //APPLICATIONEVENTHANDLER_H
