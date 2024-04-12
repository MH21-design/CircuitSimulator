#include "Circuit.h"
#include "Component.h"
#include <stdio.h>

class Simulator
{
    public:
        void start();
        void stop();
        void addComponent(Component);
        void removeComponent(Component);
        void update();

    private:
        Circuit circuit;
};