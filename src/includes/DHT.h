#include "Sensor.h"

class Dht : public Sensor 
{
    public:
        int readValue() override;
        void setTemerature(float temp);
        void setHumidity(float humidity);
        float readTemperature();
        float readHumidity();
        float computeHeatIndex(bool isFahrenheit = false);

    private:
        float _temperature;
        float _humidity;
        float convertCtoF(float c);
        float convertFtoC(float f);
        float computeHeatIndex(float temperature, float humidity, bool isFahrenheit);
};