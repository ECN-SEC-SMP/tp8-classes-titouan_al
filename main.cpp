// Bibliothèques
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Attaque.h"
#include "Animal.h"
#include "Ours.h"
#include "Loup.h" // Inclure le fichier d'en-tête Loup
#include "Pierre.h"

using namespace std;

// Taille maximales X et Y du plateau de jeu
const int tailleX = 10;
const int tailleY = 10;

// Création grille 10x10
char grille[tailleX][tailleY];

vector<Animal *> Animaux;

//  Génération animaux ||A MODIFIER AVEC CLASSE ANIMAL||
// char generationAnimaux()
// {
//     char x = '_'; // Caractère de test symbolisant l'animal -> à modifier
//     if (rand() % 100 <= 10) {
//         if (rand() % 2 == 1) {
//             x = 'P';
//         } else {
//             x = 'O';
//         }
//     }
//     return x;
// }

void CreationAnimaux()
{
    // ajout des animaux
    for (Animal *animal : Animaux)
    {
        animal->deplace(tailleX, tailleY);
        animal->setAttaque();
        // méthodes pour déterminer le type d'animaux et lui affecter le bon caractère
        // if (typeid(*animal) == typeid(Loup))
        // {
        //     grille[animal->getX()][animal->getY()] = 'L';
        // }
        // else if (typeid(*animal) == typeid(Ours))
        // {
        //     grille[animal->getX()][animal->getY()] = 'O';
        // }
        // else if (typeid(*animal) == typeid(Pierre))
        // {
        //     grille[animal->getX()][animal->getY()] = 'P';
        // }
    }
}

// Création grille 10x10
void Grid()
{
    // grille vide
    for (int i = 0; i < tailleX; i++)
    {
        for (int j = 0; j < tailleY; j++)
        {
            if (rand() % 100 <= 25)
            {
                int animal = rand()%3;
                if (animal == 1)
                {
                    Animaux.push_back(new Loup(tailleX, tailleY));
                    grille[i][j] = 'L';
                }
                else if (animal == 2)
                {
                    Animaux.push_back(new Ours(tailleX, tailleY));
                    grille[i][j] = 'O';
                }
                else
                {
                    Animaux.push_back(new Pierre(tailleX, tailleY));
                    grille[i][j] = 'P';
                }
            }
            else
            {
                grille[i][j] = '_';
            }
            //grille[i][j] = '_';
        }
    }
    // Affichage lignes
    for (int i = 0; i < tailleX; i++)
    {
        cout << endl;

        // Affichage colonnes
        for (int j = 0; j < tailleY; j++)
        {
            // grille[i][j] = generationAnimaux();
            cout << "|" << grille[i][j];
        }
    }
    cout << endl;
}
void attaqueAnimaux()
{
    for (Animal *animal : Animaux)
    {
        animal->getX();
        animal->getY();
        // animal->attaque(&animal);
    }
}
void deplacementAnimaux()
{
    for (Animal *animal : Animaux)
    {
        animal->deplace(tailleX, tailleY);
        animal->setAttaque();
    }
}
void initialisationAnimaux()
{
    /*
// Déclaration et initialisation d'un objet Loup
    Animaux.push_back(new Loup(tailleX, tailleY));
    Animaux.push_back(new Loup(tailleX, tailleY));
    Animaux.push_back(new Loup(tailleX, tailleY));
    Animaux.push_back(new Loup(tailleX, tailleY));
    */

    Grid();
    // deplacementAnimaux();
    // Grid();
}

int main()
{
    srand(time(NULL)); // Initialiser le générateur de nombres aléatoires

    // Déclaration et initialisation d'un objet Loup
    initialisationAnimaux();

    // cout << "Loup position: (" << LP.getX() << ", " << LP.getY() << ")" << endl;
    // cout << "Loup attaque: " << LP.getAttaque() << endl;

    return 0;
}
