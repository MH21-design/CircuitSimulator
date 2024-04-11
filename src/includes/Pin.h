enum class Mode  { INPUT, OUTPUT, INPUT_PULLUP };
enum class State { LOW, HIGH };

class Pin 
{
    public:
        void setMode(int pinNum, Mode mode);
        Mode getMode(int pinNum);
        void setState(int pinNum, State state);
        State getState(int pinNum);

    private:
        int pinNum;
        Mode mode;
        State state;
};