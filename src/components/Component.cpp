#include "Component.h"

std::string Component::getName()
{
    return std::string();
}

int Component::getId()
{
    return 0;
}

bool Component::operator==(const Component &other) const
{
    return id == other.id;
}
