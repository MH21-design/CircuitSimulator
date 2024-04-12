#ifndef SIMULATOR_H;
#define SIMULATOR_H;

#include "Circuit.h"
#include "Component.h"
#include <stdio.h>

class Simulator
{
    public:
        void start();
        void stop();
        void update();

    private:
        Circuit circuit;
};

#endif