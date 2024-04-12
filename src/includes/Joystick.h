#include "Pin.h"
#include <stdio.h>

class Joystick 
{
    public:
        int getPositionX();
        int getPositionY();

    private:
        Pin pinX;
        Pin pinY;
};
