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
#include <limits>
#include <locale>
#include <codecvt>

// Au début de votre programme, ajoutez ceci pour configurer la console en UTF-8
void configureConsoleUTF8() {
    std::locale::global(std::locale(""));
    std::wcout.imbue(std::locale());
    std::cout.imbue(std::locale());
}

using namespace std;

// Taille maximales X et Y du plateau de jeu
const int tailleX = 10;
const int tailleY = 10;
// Taille pour générer les positions des animaux
const int Tx = tailleX-1;
const int Ty = tailleY-1;
// Création grille 10x10
char grille[tailleX][tailleY];

//vecteur de pointeurs d'animaux
vector<Animal*> Animaux;

// Création grille 10x10
void Grid()
{
    // grille vide
    for (int i = 0; i < tailleX; i++)
    {
        for (int j = 0; j < tailleY; j++)
        {
            grille[i][j] = ' ';
        }
    }
    //ajout des animaux
    for (Animal* animal : Animaux) {
        //méthodes pour déterminer le type d'animaux et lui affecter le bon caractère
        if (typeid(*animal) == typeid(Loup)) {
            grille[animal->getX()][animal->getY()] = 'L'; // On utilisera W pour Wolf
        }
        else if(typeid(*animal) == typeid(Ours)){
            grille[animal->getX()][animal->getY()] = 'O'; // On utilisera O pour Ours
        }
    }
    
    // Affichage lignes
    for (int i = 0; i < tailleX; i++)
    {
        cout << endl;
        // Affichage colonnes
        for (int j = 0; j < tailleY; j++)
        {
            if (grille[i][j] == 'L') {
                cout << "|🐺"; // Emoji loup (U+1F43A)
            }
            else if (grille[i][j] == 'O') {
            cout << "|🐻"; // Emoji ours (U+1F43B)
            } 
            else {
                cout << "| " << grille[i][j];
            }
        }
    }
    cout << endl;
}

void attaqueAnimaux(){
    for (int i = 0; i < Animaux.size(); i++) {
        Animal* attaquant = Animaux[i];
        for (int j = 0; j < Animaux.size(); j++) { 
            if (i != j){
                Animal* defenseur = Animaux[j];
                if (attaquant->getX() == defenseur->getX() && 
                    attaquant->getY() == defenseur->getY()) {
                    
                    cout << "Combat à la position (" << attaquant->getX() 
                        << "," << attaquant->getY() << ")" << endl;
                    
                    bool resultat = attaquant->attaque(*defenseur);
    
                    if (resultat) {
                        defenseur->setVivant(false);
                        Animaux.erase(Animaux.begin() + j);
                        // L'attaquant gagne
                        cout << "Animal à la position (" << defenseur->getX() 
                            << "," << defenseur->getY() << ") a été vaincu!" << endl;
                        defenseur->setVivant(false);
                    } else {
                        attaquant->setVivant(false);
                        Animaux.erase(Animaux.begin() + i);
                        // Le défenseur gagne
                        cout << "Animal à la position (" << attaquant->getX() 
                            << "," << attaquant->getY() << ") a été vaincu!" << endl;
                        attaquant->setVivant(false);
                        break; // Sortir car l'attaquant est mort
                    }
                }

            }
                continue; // Ignorer la comparaison avec lui-même
            Animal* defenseur = Animaux[j];
            if (!defenseur->getVivant())
                continue; // Ignorer les animaux morts
            
            // Si même position, faire combattre
        }
    }
}

void deplacementAnimaux(){
    for (Animal* animal : Animaux) {
        animal->deplace(Tx, Ty);
        animal->setAttaque();
    }
}

void initialisationAnimaux(){
    // Déclaration et initialisation d'un objet Loup
    Animaux.push_back(new Loup(Tx, Ty));
    Animaux.push_back(new Loup(Tx, Ty));
    Animaux.push_back(new Loup(Tx, Ty));
    Animaux.push_back(new Loup(Tx, Ty));
    Animaux.push_back(new Ours(Tx, Ty));
    Animaux.push_back(new Ours(Tx, Ty));
    Grid();
}

int main() {
    // Appeler cette fonction au début du main
    configureConsoleUTF8();
    
    srand(time(NULL)); // Initialiser le générateur de nombres aléatoires

    // Déclaration et initialisation d'un objet Loup
    initialisationAnimaux();
    while(Animaux.size()!=1){
        cout << "Appuyez sur Entrée pour continuer au tour suivant...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        deplacementAnimaux();
        attaqueAnimaux();
        Grid();
    }

//delete les pointeurs
//autres animaux
//Tour par Tour

    return 0;
}
