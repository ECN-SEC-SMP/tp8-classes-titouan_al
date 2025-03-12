#ifndef __secsmp_attaque_h
#define __secsmp_attaque_h

// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"

using namespace std;

// Classe attaque pour intéragir avec le plateau
class Attaque
{

private:
    int type; // Type d'attaque : 0 = pierre, 1 = feuille, 2 = ciseaux

public:
    // Constructeurs
    Attaque();      // Création attaque random
    Attaque(int a); // Création attaque spécifique

    // Accesseurs
    int getAttaque() const;                 // Récupération du type d'attaque
    bool resoudreAttaque(Attaque &a) const; // true = Att. réussie, false = Att. échouée
    string getNomAttaque() const;           // Récupération du nom d'attaque
    // Mutateurs
};

#endif