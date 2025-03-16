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
    Ours(int maxX, int maxY) : Animal(maxX, maxY) {};
    Ours(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {};
    // Constructeurs
    void deplace(int maxX, int maxY); // Déplacement pour un tour

    // Accesseurs

    // Mutateurs
    void setAttaque(); // Attaque de l'animal -> Random
};

#endif