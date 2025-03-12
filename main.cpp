// Bibliothèques
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include "Attaque.h"

// Taille maximales X et Y du plateau de jeu
int tailleX = 9;
int tailleY = 9;



int main() {
    srand(time(NULL));

    // Création grille 10x10
    char grille[tailleX][tailleY];

    // Affichage lignes
    for (int i = 0; i < tailleX; i++){
        cout << endl << "__________" << endl;

        // Affichage colonnes
        for (int j = 0; j < tailleY; j++) {
            grille[i][j] = ' ';
            cout << "|" << grille[i][j];
        }
    }
    // cout << "OK" << endl;
}