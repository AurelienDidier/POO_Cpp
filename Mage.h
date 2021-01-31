#include "Perso.h"
#pragma once
class Mage: Personnage{

    private:
        int magie;

    public:
        //getter
        int getMagie();
        //setter
        void setMagie(int magieInit);
        //constructor
        Mage();
        Mage(int vieInit, int forceInit, int magieInit, int niveauInit);
        Mage(int niveauInit);

        void attaquer(Personnage &cible);

};