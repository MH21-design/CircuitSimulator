#include <stdio.h>
#include <string>

class Logger
{
    public:
        void write(std::string log);
        std::string getLog();

    private:
        std::string log; 
};