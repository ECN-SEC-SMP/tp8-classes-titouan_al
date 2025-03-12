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

    int grille[tailleX][tailleY];
    for (int i = 0; i > tailleX; i++){
        for (int j = 0; j > tailleY; j++) {
            cout << "|" << grille[i][j];
        }
    }
    cout << "OK" << endl;
}