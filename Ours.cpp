// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"
#include "Attaque.h"
#include "Ours.h"

// Création attaque spécifique (valeur sélectionnée)
void Ours::deplace(int maxX, int maxY)
{
    int a = rand() % 8;
    switch (a)
    {
    case 1: 
            this->x = (this->x - 1)%10;
            this->y = (this->y - 2)%10;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
    break;
    }
}

// On récupère la valeur de l'attaque (0, 1 ou 2)
void Ours::setAttaque()
{
    this->typeAttaque = Attaque();
}
