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
#include "Loup.h"
#include "Pierre.h"

using namespace std;

// Taille maximales X et Y du plateau de jeu
const int tailleX = 10;
const int tailleY = 10;

// Création grille 10x10
char grille[tailleX][tailleY];

vector<Animal *> Animaux; // Vecteur pour stocker l'ensemble des entités crées

// Création d'une entité basé sur le cdc de TP, et stockage de l'entité dans un vecteur de données
void CreationAnimaux()
{
    // Création d'une entité basée sur un nombre random
    for (int i = 0; i < tailleX; i++)
    {
        for (int j = 0; j < tailleY; j++)
        {
            if (rand() % 100 <= 25)
            {
                int animal = rand() % 3;
                if (animal == 1)
                {
                    Animaux.push_back(new Loup(tailleX, tailleY));
                }
                else if (animal == 2)
                {
                    Animaux.push_back(new Ours(tailleX, tailleY));
                }
                else
                {
                    Animaux.push_back(new Pierre(tailleX, tailleY));
                }
            }
        }
    }
    // Ajout initial des animaux sur la grille
    for (Animal *animal : Animaux)
    {
        // animal->deplace(tailleX, tailleY);
        // animal->setAttaque();
        //  méthodes pour déterminer le type d'animaux et lui affecter le bon caractère
        if (typeid(*animal) == typeid(Loup))
        {
            grille[animal->getX()][animal->getY()] = 'L';
        }
        else if (typeid(*animal) == typeid(Ours))
        {
            grille[animal->getX()][animal->getY()] = 'O';
        }
        else if (typeid(*animal) == typeid(Pierre))
        {
            grille[animal->getX()][animal->getY()] = 'P';
        }
    }
}

void deplacementAnimaux() // ne marche pas
{
    for (Animal *animal : Animaux)
    {
        animal->deplace(tailleX, tailleY);
        animal->setAttaque();
    }
}

// Création grille 10x10
void Grid()
{
    // grille
    for (int i = 0; i < tailleX; i++)
    {
        for (int j = 0; j < tailleY; j++)
        {
            grille[i][j] = '_';
        }
    }
    // Affichage lignes
    for (int i = 0; i < tailleX; i++)
    {
        cout << endl;

        // Affichage colonnes
        for (int j = 0; j < tailleY; j++)
        {
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

// On actualise la position de chaque entité, et on affiche leur position actuelle par un caractère
void Deplacement()
{
    Grid();
    for (Animal *animal : Animaux)
    {
        // méthodes pour déterminer le type d'animaux et lui affecter le bon caractère
        if (typeid(*animal) == typeid(Loup))
        {
            animal->deplace(tailleX, tailleY);
            grille[animal->getX()][animal->getY()] = 'L';
        }
        else if (typeid(*animal) == typeid(Ours))
        {
            animal->deplace(tailleX, tailleY);
            grille[animal->getX()][animal->getY()] = 'O';
        }
        else if (typeid(*animal) == typeid(Pierre))
        {
            animal->deplace(tailleX, tailleY);
            grille[animal->getX()][animal->getY()] = 'P';
        }
    }
}

//Analyse du plateau -> On vérifie si deux éléments sont à la même position -> Gestion de l'attaque
// A faire, chaud, pas réussi
void AnalysePlateau() {

    // Si les coordonnées X,Y d'un élément du vecteur correspondent à un autre élément X, Y du même vecteur...
    for (Animal *animal : Animaux) {
        if (Animaux[animal->getX()]) {
            grille[animal->getX()][animal->getY()] = 'X';   // Test lorsque 2 entités sont sur la même case
        }
    }
}

// On appelle la fonction grid() pour générer le tableau, puis on crée les entités sur le plateau
// On stocke les informations de chaque animaux dans un vecteur de données
void initialisationAnimaux()
{
    Grid();
    CreationAnimaux();
}

int main()
{
    char tour;         // Confirmer la fin du jeu ou non
    srand(time(NULL)); // Initialiser le générateur de nombres aléatoires

    // Déclaration et initialisation d'un objet Loup
    initialisationAnimaux();
    cout << "Démarrer jeu ?y/n";
    cin >> tour;
    if (tour == 'y')
    {
        while (tour != 'n')
        {
            Deplacement();
            // Grid();
            for (int i = 0; i < tailleX; i++)
            {
                cout << endl;
                for (int j = 0; j < tailleY; j++)
                {
                    cout << "|" << grille[i][j];
                }
            }
            cout << endl
                 << "Nombre d'entités en jeu : " << Animaux.data() << endl;
            cout << endl
                 << "Continuer le jeu ?y/n";
            cin >> tour;
            cout << endl;
        }
    } else {
        cout << "fin." << endl;
    }
    // cout << "Loup position: (" << LP.getX() << ", " << LP.getY() << ")" << endl;
    // cout << "Loup attaque: " << LP.getAttaque() << endl;

    return 0;
}
