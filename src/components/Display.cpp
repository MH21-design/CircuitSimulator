#include "../includes/Display.h"
#include <iostream>

void Display::displayNumber(int number)
{
/*
    std::cout ist ein Objekt der Standartbibliothek von C++
    diesem wird der Wert 'number' zugewiesen '<< Einfügungsoperator'
    std::endl ist ein Manipulator welcher eine neue Zeile einfügt.
*/
    std::cout << number << std::endl;
}

void Display::displayText(std::string text)
{
/*
    std::cout ist ein Objekt der Standartbibliothek von C++
    diesem wird der Wert 'text' zugewiesen '<< Einfügungsoperator'
    std::endl ist ein Manipulator welcher eine neue Zeile einfügt.
*/
    std::cout << text << std::endl;
}
