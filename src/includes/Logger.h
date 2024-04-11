#include <stdio.h>
#include <string>

class Logger
{
    public:
        void write(std::string log);
        std::string getLog(void);

    private:
        std::string log; 
};