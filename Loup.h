#ifndef __secsmp_loup_h
#define __secsmp_loup_h

// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"
#include "Attaque.h"
using namespace std;

// Classe Ours, avec héritage sur la classe Animal
class Loup : public Animal
{

//private:

public:
    Loup(int maxX, int maxY) : Animal(maxX, maxY) {};
    Loup(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {};
    // Constructeurs
    void deplace(int maxX, int maxY);      // Déplacement pour un tour

    // Accesseurs

    // Mutateurs
    void setAttaque();  // Attaque de l'animal -> Random 
};

#endif