#include "../includes/Servo.h"
#include <iostream>

void Servo::rotate(int angle)
{
    // Überprüfen ob der COde im gültigen Bereich liegt 
    if(angle < 0 || angle > 180)
    {
        std::cerr << "ungültiger Winkel. Der Winkel muss zwischen 0 und 180 Grad liegen." << std::endl;
        
        return;
    }

    // Hier findet später die Logik für die Animation der Benutzeroberfläche statt
    std::cout << "Drehe den Servomotor um " << angle << " Grad." << std::endl;
}
