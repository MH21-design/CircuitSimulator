#include "Circuit.h"

void Circuit::addComponent(Component c)
{
    // Fügt das Component-Objekt zur Komponentenliste hinzu
    components.push_back(c);
}

void Circuit::removeComponent(Component c)
{
    // Durchläuft die Komponentenliste mit einem Iterator
    // und entfernt das angegebene Component-Objekt
    for (std::vector<Component>::iterator it = components.begin(); it != components.end(); ++it)
    {
        // Der Vergleichsoperator '==' muss in der Component-Klasse überladen werden!
        if(*it == c) 
        {
            components.erase(it);
            break;
        }
    }
}