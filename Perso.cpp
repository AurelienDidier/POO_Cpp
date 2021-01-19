#include "Perso.h"

/*
void Personnage::attaquer(Personnage &cible){
    cible.recevoirDegats(force);
}*/

Personnage::Personnage(int vieInit, int forceInit, int niveauInit) : vie(vieInit), force(forceInit), niveau(niveauInit) 
{
}
Personnage::Personnage(int niveauInit) : vie(niveauInit*100), force(niveauInit*10), niveau(niveauInit)
{
}

Personnage::Personnage() : vie(100), force(10), niveau(1)
{
}

//Getter
int Personnage::getVie()
{
    return vie;
}
int Personnage::getNiveau()
{
    return niveau;
}
int Personnage::getForce()
{
    return force;
}
//Setter
void Personnage::setVie(int nouvelleVie)
{
    vie=nouvelleVie;
}
void Personnage::setNiveau(int nouveauNiveau)
{
    niveau=nouveauNiveau;
}
void Personnage::setVie(int nouvelleVie)
{
    vie=nouvelleVie;
}

void Personnage::equiper(Arme armeInit){
    arme=armeInit;
}




