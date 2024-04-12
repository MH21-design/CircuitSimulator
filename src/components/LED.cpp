#include "../includes/LED.h"
#include "../includes/Component.h"

void Led::turnOn()
{
    pin.setState(State::HIGH);
}

void Led::turnOff()
{
    pin.setState(State::LOW);
}

void Led::flash(int times, int delay)
{
    for(int i =0; i < times; i++) 
    {
        turnOn();
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}
