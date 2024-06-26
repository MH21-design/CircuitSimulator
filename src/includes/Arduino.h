#ifndef ARDUINO_H // Überprüft, ob ARDUINO_H nicht definiert ist
#define ARDUINO_H // Definiert ARDUINO_H

#include "Pin.h"
#include <map>

class Arduino 
{
    public:
        // void pinMode(int pinNum, Mode mode);
        State digitalRead(int pinNum);
        void digitalWrite(int pinNum, State state);
        int analogRead(int pinNum);
        void analogWrite(int pinNum, int value);

    private:
        std::map<int,Pin> pins;
};

#endif