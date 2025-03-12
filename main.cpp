// Bibliothèques
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include "Attaque.h"

// Taille maximales X et Y du plateau de jeu
const int tailleX = 10;
const int tailleY = 10;

// Création grille 10x10
char grille[tailleX][tailleY];

// Création grille 10x10
void Grid()
{
    // Affichage lignes
    for (int i = 0; i < tailleX; i++)
    {
        cout << endl;

        // Affichage colonnes
        for (int j = 0; j < tailleY; j++)
        {
            grille[i][j] = generationAnimaux();
            cout << "|" << grille[i][j];
        }
    }
    cout << endl;
}
// ours et pierres
//  Génération animaux ||A MODIFIER AVEC CLASSE ANIMAL||
char generationAnimaux()
{
    char x = '_'; // Caractère de test symbolisant l'animal -> à modifier
    if (rand() % 100 <= 25) {
        if (rand() % 2 == 1) {
            x = 'P';
        } else {
            x = 'O';
        }
    }
    return x;
}
// Main
int main()
{
    srand(time(NULL));
    Grid();
    // cout << "OK" << endl;
}