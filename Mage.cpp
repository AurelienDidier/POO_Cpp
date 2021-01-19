#include "Mage.h"
void Mage::attaquer(Personnage &cible){
    cible.recevoirDegats(magie);
}

int Mage::getMagie()
{
    return magie;
}


