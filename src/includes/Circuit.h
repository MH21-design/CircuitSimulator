#ifndef CIRCUIT_H
#define CIRCUIT_H

#include "Component.h"
#include <vector>

class Circuit
{
    public: 
        void addComponent(Component);
        void removeComponent(Component);

    private:
        // deklariert eine Collegtion (vector) welche Component-Objekte hält
        std::vector<Component> components;
};

#endif