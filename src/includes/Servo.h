#include "Motor.h"

class Servo : public Motor
{
    public:
        void rotate(int angle) override;
        void moveToPosition(int position) override;
};