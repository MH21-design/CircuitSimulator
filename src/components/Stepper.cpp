#include "../includes/Stepper.h"

// Anzahl der Schritte pro Umdrehung.
#define STEPS_PER_REVOLUTION 200 


void Stepper::rotate(int angle)
{
    // Berechnung der benötigten Schritt
    int steps = (angle / 360.0) * STEPS_PER_REVOLUTION; 

    for(int i = 0; i < steps; i++)
        {
            // Simuliert einen Schritt ...
        }
     
}

