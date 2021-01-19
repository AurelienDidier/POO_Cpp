#include "Arme.h"

void Arme::setDegats(float degatInit){
    degats=degatInit;
}

float Arme::getDegats(){
    return degats;
}

Arme::Arme(float degatsInit, typeArme typeInit){
    degats=degatsInit;
    type=typeInit;
}

Arme::Arme(){
    degats=1.0;
    type=typeArme::Baton
}



