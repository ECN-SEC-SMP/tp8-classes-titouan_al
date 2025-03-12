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

    char grille[tailleX][tailleY];
    for (int i = 0; i > tailleX; i++){
        cout << "U" << endl;
        for (int j = 0; j > tailleY; j++) {
            cout << "V";
        }
    }
    for (int i = 0; i > tailleX; i++){
        cout << "__" << endl;
        for (int j = 0; j > tailleY; j++) {
            grille[i][j] = '0';
            cout << "|" << grille[i][j];
        }
    }
    cout << "OK" << endl;
}