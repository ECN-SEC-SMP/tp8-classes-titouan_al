// Bibliothèques
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include "Attaque.h"

// Taille maximales X et Y du plateau de jeu
int tailleX = 10;
int tailleY = 10;

// Création grille 10x10
void Grid()
{
    // Création grille 10x10
    char grille[tailleX][tailleY];

    // Affichage lignes
    for (int i = 0; i < tailleX; i++)
    {
        cout << endl;

        // Affichage colonnes
        for (int j = 0; j < tailleY; j++)
        {
            grille[i][j] = '_';
            cout << "|" << grille[i][j];
        }
    }
    cout << endl;
}

// Main
int main()
{
    srand(time(NULL));
    Grid();
    // cout << "OK" << endl;
}