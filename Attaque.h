#ifndef __secsmp_attaque_h
#define __secsmp_attaque_h
#include <string>
#include <iostream>
#include "stdlib.h"

using namespace std;

class Attaque
{

private:
    int type;

public:
    // Constructeurs
    Attaque();
    Attaque(int a);

    // Accesseurs
    int getAttaque() const;
    bool resoudreAttaque(Attaque &a) const;
    string getNomAttaque() const;
    // Mutateurs
};

#endif