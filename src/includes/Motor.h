#include "Pin.h"
#include <stdio.h>
#include <vector>

class Motor
{
    protected:
        std::vector<Pin> pins;

    public:
        virtual void rotate(int angle) = 0;
        virtual void moveToPosition(int position) = 0;
};