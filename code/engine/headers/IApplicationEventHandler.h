//
// Created by rothnald on 7/2/18.
//
#pragma once

#ifndef IAPPLICATIONEVENTHANDLER_H
#define IAPPLICATIONEVENTHANDLER_H

class IApplicationEventHandler
{
public:
    virtual void OnKeyDown(unsigned int keyCode, bool isRepeat) {}
    virtual void OnKeyUp(unsigned int keyCode, bool isRepeat) {}
    virtual void OnMouseDown(unsigned int mouseDown, unsigned int numClicks) {}
    virtual void OnMouseUp(unsigned int mouseDown, unsigned int numClicks) {}
    virtual void OnMouseMove(unsigned int mousePosX, unsigned int mousePosY, int deltaX, int deltaY) {}
};

#endif //APPLICATIONEVENTHANDLER_H
