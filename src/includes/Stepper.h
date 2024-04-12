#ifndef STEPPER_H;
#define STEPPER_H;

#include "Motor.h"

class Stepper : public Motor
{
    public:
        void rotate(int angle) override;
};

#endif