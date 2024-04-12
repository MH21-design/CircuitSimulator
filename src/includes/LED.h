#include "Pin.h"

class Led 
{
    public:
        void turnOn();
        void turnOff();
        void flash();

    private:
        Pin pin;
};