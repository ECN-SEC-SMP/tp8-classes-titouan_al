#ifndef __secsmp_loup_h
#define __secsmp_loup_h

// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"

using namespace std;

// Classe Ours, avec héritage sur la classe Animal
class Loup : public Animal
{

private:
    ; 

public:
    // Constructeurs
    void deplace(int maxX, int maxY);      // Déplacement pour un tour

    // Accesseurs

    // Mutateurs
    void setAttaque();  // Attaque de l'animal -> Random 
};

#endif