// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"
#include "Attaque.h"
#include "Loup.h"

// Déplacement 8 directions basé sur des vecteurs positions
void Loup::deplace(int maxX, int maxY)
{
    this->x  = rand() % maxX;
    this->y = rand() % maxY;

}

// On récupère la valeur de l'attaque (0, 1 ou 2)
void Loup::setAttaque()
{
    
    int a = rand() % 3;
    switch (a)
    {
    case 0:
        this->typeAttaque = Attaque(0);
    case 1:
        this->typeAttaque = Attaque(1);
    case 2:
        this->typeAttaque = Attaque(2);
    default:
        break;
    }
}
