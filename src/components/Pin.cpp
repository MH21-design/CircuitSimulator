#include "Pin.h"

/*
void Pin::setMode(int pinNum, Mode mode)
{
    // Logic implementieren
}

Mode Pin::getMode(int pinNum)
{
    // Logic implementieren
}
*/

void Pin::setState(State state)
{
    this->state = state;
}

State Pin::getState()
{
    return this->state;
}

void Pin::setAnalogValue(int value)
{
    this->analogValue = value;
}

int Pin::getAnalogValue()
{
    return this->analogValue;
}
