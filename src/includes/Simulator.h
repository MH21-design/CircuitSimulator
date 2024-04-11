#include "Circuit.h"
#include "Component.h"
#include <stdio.h>

class Simulator
{
    public:
        void start(void);
        void stop(void);
        void addComponent(Component);
        void removeComponent(Component);
        void update(void);

    private:
        Circuit circuit;
};