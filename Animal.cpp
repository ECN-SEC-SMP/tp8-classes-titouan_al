#include <string>
#include "Animal.h"
#include "Attaque.h"
using namespace std;

Animal::Animal(int maxX, int maxY) {
    x = rand() % maxX;
    y = rand() % maxY;
    vivant = true;
    }

Animal::Animal(int maxX, int maxY, int a, int b) {
    if (a<maxX ){
        x = a; 
    }
    else {
        x = a % maxX;
    }
    if (b<maxY ){
        y = b % maxX;
        
    }
    else {
        y = b % maxY;  
    }
    vivant = true;
} 

std::string Animal::getNom() const {
    return nom;
}

int Animal::getX() const {
    return x;
}

int Animal::getY() const {
    return y;
}

bool Animal::getVivant() const {
    return vivant;
}

Attaque Animal::getAttaque() const {
    return typeAttaque;
}

void Animal::setVivant(bool v) {
    vivant = v;
}

bool Animal::attaque(Animal &a) {
    return typeAttaque.resoudreAttaque(a);
}

