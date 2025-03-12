// Bibliothèques
#include <string>
#include <iostream>
#include "stdlib.h"
#include "Attaque.h"

// Création attaque aléatoire (0, 1 ou 2)
Attaque::Attaque()
{
    this->type = rand() % 2;
}

// C
Attaque::Attaque(int a)
{
    this->type = a;
}

// On récupère la valeur de l'attaque (0, 1 ou 2)
int Attaque::getAttaque() const
{
    return type;
}

// Vérification de l'attaque, renvoie true si l'attaque est réussie, sinon false
bool Attaque::resoudreAttaque(Attaque &a) const
{
    if (this->type == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// On récupère le nom de l'attaque en fonction de la valeur du type
string Attaque::getNomAttaque() const
{
    if (type == 0)
    {
        return "Pierre";
    }
    else if (type == 1)
    {
        return "Feuille";
    }
    else if (type == 2)
    {
        return "Ciseaux";
    }
    else
    {
        return 0;
    }
}
