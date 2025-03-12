// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"
#include "Attaque.h"
#include "Ours.h"

// Déplacement 8 directions basé sur des vecteurs positions
void Ours::deplace(int maxX, int maxY)
{
    int a = rand() % 8;
    switch (a)
    {
    case 1:
        this->x = (this->x - 1) % maxX;
        this->y = (this->y - 2) % maxY;
    case 2:
        this->x = (this->x - 2) % maxX;
        this->y = (this->y - 1) % maxY;
    case 3:
        this->x = (this->x - 2) % maxX;
        this->y = (this->y + 1) % maxY;
    case 4:
        this->x = (this->x - 1) % maxX;
        this->y = (this->y + 2) % maxY;
    case 5:
        this->x = (this->x + 1) % maxX;
        this->y = (this->y + 2) % maxY;
    case 6:
        this->x = (this->x + 2) % maxX;
        this->y = (this->y + 1) % maxY;
    case 7:
        this->x = (this->x + 2) % maxX;
        this->y = (this->y - 1) % maxY;
    case 8:
        this->x = (this->x + 1) % maxX;
        this->y = (this->y - 2) % maxY;
    default:
        break;
    }
}

// On récupère la valeur de l'attaque (0, 1 ou 2)
void Ours::setAttaque()
{
    this->typeAttaque = Attaque(1);
}
