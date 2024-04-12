#ifndef JOYSTICK_H;
#define JOYSTICK_H;

#include "Component.h"
#include "Pin.h"
#include <stdio.h>

class Joystick : public Component
{
    public:
        int getPositionX();
        int getPositionY();

    private:
        Pin pinX;
        Pin pinY;
};

#endif