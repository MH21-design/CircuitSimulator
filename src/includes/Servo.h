#ifndef SERVO_H;
#define SERVO_H;

#include "Motor.h"

class Servo : public Motor
{
    public:
        void rotate(int angle) override;
};

#endif