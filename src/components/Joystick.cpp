#include "../includes/Joystick.h"

int Joystick::getPositionX()
{
    return pinX.getAnalogValue();
}

int Joystick::getPositionY()
{
    return pinY.getAnalogValue();
}