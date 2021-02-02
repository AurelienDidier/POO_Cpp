#include "Perso.h"
#pragma once
class Mage: public Personnage{

    private:
        int magie;

    public:
        //getter
        int getMagie();
        //setter
        void setMagie(int magieInit);
        //constructor
        Mage();
        Mage(int niveauInit);
        Mage(int vieInit, int forceInit, int magieInit, int niveauInit);

        void attaquer(Personnage &cible);
        void attaquer(Mage &cible);

};
