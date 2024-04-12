#include "../includes/Component.h"

// Konstruktor zum initialisieren einer Komponente
Component::Component(std::string name, int id)
: name(name), id(id)
{
}

std::string Component::getName()
{
/*  Zeigt auf das aktuelle Objekt dessen Methode aufgerufen wir
    lässt man das Schlüsselwort 'this' weg, greift man auf die
    lokale Variable oder das Attribut 'name' zu das sich 
    im aktuellen Gültigkeitsbereich (Scope) befindet.
    Das Schlüsselwort 'this' hier also optional.
*/
    return this->name;
}

int Component::getId()
{
    return this->id;
}


// überladen des Vergleichsoperator '==' um zwei 
// Komponenten miteinander zu vergleichen
bool Component::operator==(const Component &other) const
{
    return id == other.id;
}
