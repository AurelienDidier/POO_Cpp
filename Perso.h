#include "Arme.h"
#pragma once
class Personnage{
    //Definition de la classe personnage
    private:
        int vie;
        int force;
        int niveau;
        //int calculerDegats()
        const static int niveauMax=99;
        Arme arme; // L'Arme est "contenue" dans le Personnage
    //Arme *m_arme; //L'Arme est un pointeur, l'objet n'est plus contenu dans le Personnage

    public:

        //Getter
        int getVie();
        int getNiveau();
        int getForce();
        //Setter
        void setVie(int nouvelleVie);
        void setNiveau(int nouveauNiveau);
        void setForce(int nouvelleForce);

        void attaquer(Personnage &cible);
        void recevoirDegats(int degat);
        
        //Constructeur
        Personnage(int vieInit, int forceInit, int niveauInit);
        Personnage(int niveauInit);
        Personnage();
        //Destructeur
        ~Personnage();

        void equiper(Arme armeInit);
};