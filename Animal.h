#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include "Attaque.h"

class Animal {
protected:
    std::string nom;
    int x; // abscisse de l'animal
    int y; // ordonnée de l'animal
    bool vivant;
    Attaque typeAttaque;

public:
    Animal(int maxX, int maxY);
    Animal(int maxX, int maxY, int a, int b);

    std::string getNom() const;
    int getX() const;
    int getY() const;
    bool getVivant() const;
    Attaque getAttaque() const;

    void setVivant(bool v);
    bool attaque(Animal &a);

    virtual void setAttaque() = 0; // virtuelle pure
    virtual void deplace(int maxX, int maxY) = 0; // virtuelle pure
};

#endif // ANIMAL_H