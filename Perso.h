#include "Arme.h"

class Personnage{
    //Definition de la classe personnage
    private:
        int vie;
        int force;
        int niveau;
        //int calculerDegats()
        const static int niveauMax=99;
        Arme arme;

    public:

        //Getter
        int getVie();
        int getNiveau();
        int getForce();
        //Setter
        void setVie(int nouvelleVie);
        void setNiveau(int nouveauNiveau);
        void setForce(int nouvelleForce);

        virtual void attaquer(Personnage &cible);
        void recevoirDegats(int degat);
        
        //Constructeur
        Personnage(int vieInit, int forceInit, int niveauInit);
        Personnage(int niveauInit);
        Personnage();
        //Destructeur
        ~Personnage();

        void equiper(Arme armeInit);

        
};
