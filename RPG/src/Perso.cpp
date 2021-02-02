#include "Perso.h"
/*
void Personnage::attaquer(Personnage &cible){
    cible.recevoirDegats(force);
}*/

inline Personnage::Personnage(int vieInit, int forceInit, int niveauInit): vie(vieInit), force(forceInit), niveau(niveauInit)
{
}
inline Personnage::Personnage(int niveauInit) : vie(niveauInit*100), force(niveauInit*10), niveau(niveauInit)
{
}

inline Personnage::Personnage() : vie(100), force(10), niveau(1)
{
}
inline Personnage::~Personnage( )
{
}

//Getter
inline int Personnage::getVie()
{
    return vie;
}
inline int Personnage::getNiveau()
{
    return niveau;
}
inline int Personnage::getForce()
{
    return force;
}
inline Arme Personnage::getArme()
{
    return arme;
}

//Setter
inline void Personnage::setVie(int nouvelleVie)
{
    vie=nouvelleVie;
}
inline void Personnage::setForce(int nouvelleForce)
{
    force=nouvelleForce;
}
inline void Personnage::setNiveau(int nouveauNiveau)
{
    niveau=nouveauNiveau;
}
inline void Personnage::recevoirDegats(int degat){
    vie=vie-degat;
}

inline void Personnage::attaquer(Personnage &cible){
	cible.recevoirDegats(force*this->getArme().getDegats());
}

inline void Personnage::equiper(Arme armeInit){
    arme=armeInit;
}
