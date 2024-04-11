#include <stdio.h>
#include <string>

class Component
{
    public:
        std::string getName(void);
        int getId(void);

    private:
        std::string name;
        int id;
};