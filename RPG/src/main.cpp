#include "Mage.cpp"
#include "Perso.cpp"
#include "Arme.cpp"

int main(){
    Personnage heros1(100, 10, 1);
    heros1.~Personnage();

    Personnage heros2(1);
    Personnage heros3(0);
    Personnage heros4;

    Mage salazar(100,10,10,1);

    Mage gandalf(100,10,10,1);//Attention, marche pas avec les autres constructeurs

    gandalf.attaquer(heros2);
    gandalf.attaquer(salazar);
    Arme epee(2.0,typeArme::Epee);
    Arme baton(1.5,typeArme::Baton);
    heros4.equiper(epee);
    gandalf.equiper(baton);



    //gandalf.attaquer();

};
