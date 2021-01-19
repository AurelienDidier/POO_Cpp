#include "Perso.h"
class Mage: Personnage{
    private:
        int magie=0;

        void attaquer(Personnage &cible);

    public:
        int Mage::getMagie();
};