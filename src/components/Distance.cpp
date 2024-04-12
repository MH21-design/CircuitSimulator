#include "../includes/Distance.h"

Distance::Distance(int simulatedValue)
    : simulatedValue(simulatedValue)
{
}

double Distance::microsecondsToInch()
{
/*
    Die Zahl 74.0 repräsentiert die Zeit in Mikrosekunden, die Schallwellen benötigen,
    um einen Zoll in Luft bei Raumtemperatur zu durchlaufen. Da das Ultraschallsignal 
    hin und zurück reist, wird dieser Wert durch 2 geteilt. Daher wird die gemessene 
    Zeit (in Mikrosekunden) durch 74/2 geteilt, um die Entfernung in Zoll zu erhalten.
*/
    return simulatedValue / 74 / 2;
}
double Distance::microsecondsToCentimeters()
{
/*
    Die Zahl 29.0 repräsentiert die Zeit in Mikrosekunden, die Schallwellen benötigen,
    um einen Zentimeter in Luft bei Raumtemperatur zu durchlaufen. Da das Ultraschallsignal 
    hin und zurück reist, wird dieser Wert durch 2 geteilt. Daher wird die gemessene 
    Zeit (in Mikrosekunden) durch 29/2 geteilt, um die Entfernung in Zoll zu erhalten.
*/
    return simulatedValue / 29 / 2;
}

