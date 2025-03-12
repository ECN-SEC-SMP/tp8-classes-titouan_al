#ifndef __secsmp_ours_h
#define __secsmp_ours_h

// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"

using namespace std;

// Classe Ours, avec héritage sur la classe Animal
class Ours : public Animal
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