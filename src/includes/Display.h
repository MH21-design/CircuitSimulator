#include "Pin.h"
#include <stdio.h>
#include <string>
#include <vector>

class Display
{
    public:
        void displayNumber(int number);
        void displayText(std::string text);

    private:
        std::vector<Pin> pins;
};