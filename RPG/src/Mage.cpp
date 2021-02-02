#include "Mage.h"

//Getter
inline int Mage::getMagie()
{
    return magie;
}

inline void Mage::setMagie(int magieInit)
{
    magie = magieInit;
}

//Constructor

inline Mage::Mage()
{
    Personnage();
    magie=10;
}
inline Mage::Mage(int niveauInit)
{
    Personnage(100*niveauInit,10*niveauInit,1*niveauInit);
    magie = niveauInit*10;
}

inline Mage::Mage(int vieInit, int forceInit, int magieInit, int niveauInit)
{
      Personnage(vieInit,forceInit,niveauInit);
      magie=magieInit;
}

inline void Mage::attaquer(Mage &cible){
    cible.recevoirDegats((magie-cible.magie/2)* this->getArme().getDegats());
}
inline void Mage::attaquer(Personnage &cible){
    cible.recevoirDegats(magie* this->getArme().getDegats());
}
