#ifndef MOTOR_H;
#define MOTOR_H;

#include "Pin.h"
#include "Component.h"
#include <stdio.h>
#include <vector>

class Motor : public Component
{
    protected:
        std::vector<Pin> pins;

    public:
    //  rein virtuelle Funktion
        virtual void rotate(int angle) = 0;
};

#endif