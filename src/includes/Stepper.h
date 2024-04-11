#include "Motor.h"

class Stepper : public Motor
{
    public:
        void rotate(int angle) override;
        void moveToPosition(int position) override;
};