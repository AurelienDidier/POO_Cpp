#include "Arme.h"

inline void Arme::setDegats(float degatInit){
    degats=degatInit;
}

inline float Arme::getDegats(){
    return degats;
}

inline Arme::Arme(float degatsInit, typeArme typeInit){
    degats=degatsInit;
    type=typeInit;
}

inline Arme::Arme(){
    degats=1.0;
    type=typeArme::Baton;
}



