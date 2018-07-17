//
// Created by rothnald on 7/3/18.
//
#include <MainEventHandler.h>
#include <iostream>

MainEventHandler::MainEventHandler() {}

void MainEventHandler::OnKeyDown(unsigned int keyCode, bool isRepeat)
{
    KeyDown = true;
    std::cout << "OnKeyDown called." << std::endl;
}
void MainEventHandler::OnKeyUp(unsigned int keyCode, bool isRepeat)
{
    KeyDown = false;
    std::cout << "OnKeyUp called." << std::endl;
}
