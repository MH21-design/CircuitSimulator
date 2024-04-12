#include "Pin.h"

class Sensor
{
    protected:
        Pin pin;

    public:
        virtual int readValue() = 0;
};