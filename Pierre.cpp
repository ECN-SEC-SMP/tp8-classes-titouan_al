// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"
#include "Attaque.h"
#include "Pierre.h"

// Création attaque spécifique (valeur sélectionnée)
void Pierre::deplace(int maxX, int maxY)
{

}

// On récupère la valeur de l'attaque (0, 1 ou 2)
void Pierre::setAttaque()
{
    this->typeAttaque = Attaque(2);
}
