#include "Sensor.h"

class Distance : public Sensor
{
    public:
        int readValue(void) override;
};