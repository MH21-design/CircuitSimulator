#ifndef SENSOR_H;
#define SENSOR_H;

#include "Pin.h"
#include "Component.h"

class Sensor : public Component
{
    public:
    //  rein virtuelle Funktionen
        
    protected:
        Pin pin;
};

#endif