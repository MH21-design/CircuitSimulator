#include "Arduino.h"
#include "Pin.h"

// Der Arduino hat 14 Digitale und 6 Analoge Pins
Pin digitalPins[14];
Pin analogPins[6];

/*
void Arduino::pinMode(int pinNum, Mode mode)
{
    In einer Simulation wie dieser, wo wir nicht wirklich mit Hardware 
    interagieren, können wir diese Funktion ignorieren, da wir die Pins nicht 
    wirklich als Eingang oder Ausgang konfigurieren müssen. Stattdessen 
    simulieren wir einfach das Verhalten der Pins, indem wir Werte in 
    einem Array speichern und abrufen.
}
*/

State Arduino::digitalRead(int pinNum)
{
    // Gibt den Zustand des angegebenen digitalen Pins zurück
    return digitalPins[pinNum].getState();
}

void Arduino::digitalWrite(int pinNum, State state)
{
    // Setzt den Zustand des gewählten digitalen Pins
    digitalPins[pinNum].setState(state);
}

int Arduino::analogRead(int pinNum)
{
    // Liest den analogen Wert eines bestimmten Pins und gibt einen Wert 
    // zwischen 0 und 1023 zurück
    return analogPins[pinNum].getAnalogValue();
}

void Arduino::analogWrite(int pinNum, int value)
{
    // Setzt den analogen Wert eines bestimmten Pins auf einen Wert zwischen 0 und 255
    analogPins[pinNum].setAnalogValue(value);
}
