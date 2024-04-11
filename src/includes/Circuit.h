#include "Component.h"
#include <stdio.h>
#include <vector>

class Circuit
{
    public: 
        void addComponent(Component);
        void removeComponent(Component);

    private:
        std::vector<Component> components;
};