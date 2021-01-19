
#include "Arme.h"

using namespace std;

Arme::Arme() : nom("Baton"), degats(1.0)
{

}

Arme::Arme(string nomI, float degatsI) : nom(nomI), degats(degatsI)
{

}

float Arme::getDegats() const
{
    return degats;
}
