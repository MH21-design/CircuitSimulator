#include "../includes/DHT.h"
#include <cmath>

void Dht::setTemerature(float temp)
{
    _temperature = temp;
}

void Dht::setHumidity(float humidity)
{
    _humidity = humidity;
}

float Dht::readTemperature()
{
    return _temperature;
}

float Dht::convertCtoF(float c)
{
    return c * 1.8 + 32;
}

float Dht::convertFtoC(float f)
{
    return (f-32) / 1.8;
}

float Dht::readHumidity()
{
    return _humidity;
}

float Dht::computeHeatIndex(bool isFahrenheit) {
  float hi = computeHeatIndex(readTemperature(), readHumidity(), isFahrenheit);
  return hi;
}

float Dht::computeHeatIndex(float temperature, float percentHumidity, bool isFahrenheit) {
  // Berechnung des Hitzeindex basierend auf der Formel
  float hi;

  if (!isFahrenheit)
    temperature = convertCtoF(temperature);

  hi = 0.5 * (temperature + 61.0 + ((temperature - 68.0) * 1.2) +
              (percentHumidity * 0.094));

  if (hi > 79) {
    hi = -42.379 + 2.04901523 * temperature + 10.14333127 * percentHumidity +
         -0.22475541 * temperature * percentHumidity +
         -0.00683783 * pow(temperature, 2) +
         -0.05481717 * pow(percentHumidity, 2) +
         0.00122874 * pow(temperature, 2) * percentHumidity +
         0.00085282 * temperature * pow(percentHumidity, 2) +
         -0.00000199 * pow(temperature, 2) * pow(percentHumidity, 2);

    if ((percentHumidity < 13) && (temperature >= 80.0) &&
        (temperature <= 112.0))
      hi -= ((13.0 - percentHumidity) * 0.25) *
            sqrt((17.0 - std::abs(temperature - 95.0)) * 0.05882);

    else if ((percentHumidity > 85.0) && (temperature >= 80.0) &&
             (temperature <= 87.0))
      hi += ((percentHumidity - 85.0) * 0.1) * ((87.0 - temperature) * 0.2);
  }

  return isFahrenheit ? hi : convertFtoC(hi);
}