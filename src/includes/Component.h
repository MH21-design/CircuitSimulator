#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component
{
    public:
        std::string getName();
        int getId();
        bool operator==(const Component &other) const;

    private:
        std::string name;
        int id;

    
    inline bool Component::operator==(const Component &other) const
    {
        return id == other.id;
    }
};

#endif