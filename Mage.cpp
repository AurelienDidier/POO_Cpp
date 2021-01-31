#include "Mage.h"

//Getter
inline int Mage::getMagie()
{
    return magie;
}

//Getter
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
inline Mage::Mage(int vieInit, int forceInit, int magieInit, int niveauInit)
{
      Personnage(vieInit,forceInit,niveauInit);
      magie=magieInit;
}
inline Mage::Mage(int niveauInit):Personnage(niveauInit), magie(niveauInit*10)
{}

inline void Mage::attaquer(Personnage &cible){
    cible.recevoirDegats(magie);
}
