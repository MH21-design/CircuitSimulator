#include "Sensor.h"

class Dht : public Sensor 
{
    public:
        int readValue(void) override;
};