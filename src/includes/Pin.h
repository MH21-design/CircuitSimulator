#ifndef PIN_H  // Überprüft, ob PIN_H nicht definiert ist
#define PIN_H  // Definiert PIN_H

// enum class Mode  \{ INPUT, OUTPUT, INPUT_PULLUP };
enum class State { LOW, HIGH };

class Pin 
{
    public:
        // void setMode(int pinNum, Mode mode);
        // Mode getMode(int pinNum);
        void setState(State state);
        State getState();
        void setAnalogValue(int value);
        int getAnalogValue();

    private:
        int pinNum;
        // Mode mode;
        State state;
        int analogValue;
};

#endif