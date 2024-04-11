#include "Pin.h"
#include <map>

class Arduino 
{
    public:
        void pinMode(int pinNum, Mode mode);
        int digitalRead(int pinNum);
        void digitalWrite(int pinNum, State state);
        int analogRead(int pinNum);
        void analogWrite(int pinNum, int value);

    private:
        std::map<int,Pin> pins;
};