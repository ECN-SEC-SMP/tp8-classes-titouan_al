#ifndef __secsmp_pierre_h
#define __secsmp_pierre_h

// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Animal.h"

using namespace std;

// Classe Pierre, avec héritage sur la classe Animal
class Pierre : public Animal
{

private:
    ;

public:
    Pierre(int maxX, int maxY) : Animal(maxX, maxY) {};
    Pierre(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {};
    // Constructeurs
    void deplace(int maxX, int maxY); // Déplacement pour un tour

    // Accesseurs

    // Mutateurs
    void setAttaque(); // Attaque de l'animal -> Random
};

#endif