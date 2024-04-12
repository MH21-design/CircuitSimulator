#ifndef DISTANCE_H;
#define DISTANCE_H;

#include "Sensor.h"

class Distance : public Sensor
{
    public:
        Distance(int simulatedValue);
        double microsecondsToCentimeters();
        double microsecondsToInch();
        
    private:
        // simulierter Wert für die Entfernung
        int simulatedValue;
};

#endif