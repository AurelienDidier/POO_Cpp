#include "Mage.h"

//Getter
int Mage::getMagie()
{
    return magie;
}

//Getter
void Mage::setMagie(int magieInit)
{
    magie = magieInit;
}

//Constructor

Mage::Mage()
{
    Personnage();
    magie=10;
}
Mage::Mage(int vieInit, int forceInit, int magieInit, int niveauInit)
{
      Personnage(vieInit,forceInit,niveauInit);
      magie=magieInit;
}
Mage::Mage(int niveauInit):Personnage(niveauInit), magie(niveauInit*10)
{}

void Mage::attaquer(Personnage &cible){
    cible.recevoirDegats(magie);
}

void Mage::attaquer(Mage &cible){
    cible.recevoirDegats(magie - cible.getMagie()/2);
}


