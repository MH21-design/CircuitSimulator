#ifndef LED_H;
#define LED_H;

#include "Pin.h"
#include <chrono>
#include <thread>

class Led 
{
    public:
        void turnOn();
        void turnOff();
        void flash(int times, int delay);

    private:
        Pin pin;
};

#endif;