#ifndef CLOCK_H
#define CLOCK_H    

#include "Component.h"
#include <chrono>
#include <ctime>
#include <string>

class Clock : public Component
{
    public:
        std::string getCurrentTime();
};

#endif