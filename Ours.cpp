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
    const int deplaceX[] = {2, 1, -1, -2, -2, -1, 1, 2};
    const int deplaceY[] = {1, 2, 2, 1, -1, -2, -2, -1};
    int a = rand() % 8;

    // Modification de la position en fct de a (tableaux de valeurs), contraint avec la taille max. du tableau
    x = (x + deplaceX[a])%maxX;
    y = (y + deplaceY[a])%maxY;
}

// On récupère la valeur de l'attaque (0, 1 ou 2)
void Ours::setAttaque()
{
    this->typeAttaque = Attaque(1);
}
