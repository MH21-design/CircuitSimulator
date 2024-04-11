#include "Pin.h"

class Led 
{
    public:
        void turnOn(void);
        void turnOff(void);
        void flash(void);

    private:
        Pin pin;
};