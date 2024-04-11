#include "Pin.h"
#include <stdio.h>

class Joystick 
{
    public:
        int getPositionX(void);
        int getPositionY(void);

    private:
        Pin pinX;
        Pin pinY;
};
