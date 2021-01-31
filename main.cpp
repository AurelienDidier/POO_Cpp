#include "Mage.cpp"
#include "Perso.cpp"
#include "Arme.cpp"

int main(){
    Personnage heros1(100, 10, 1);
    heros1.~Personnage();

    Personnage heros2(1);
    Personnage heros3();
    Personnage heros4();

    Mage salazar();

    Mage gandalf(100,10,10,1);

    gandalf.attaquer(heros2);

    Arme epee(2.0,typeArme::Epee);
    Arme baton(1.5,typeArme::Baton);


    //Personnage pers=dynamic_cast<Personnage> (salazar);
    //gandalf.attaquer();

};
