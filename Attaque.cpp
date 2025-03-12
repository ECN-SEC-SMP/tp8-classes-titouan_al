#include <string>
#include <iostream>
#include "stdlib.h"
#include "Attaque.h"

Attaque::Attaque()
{
    rand()%2;
}

Attaque::Attaque(int a)
{
    a;
}

int Attaque::getAttaque() const{
    return type;
}

bool Attaque::resoudreAttaque(Attaque &a) const {
    ;
}

string getNomAttaque() {
    ;
}

