#pragma once

enum typeArme {Baton, Epee, Arc};

class Arme{

    private:

        float degats;
        typeArme type;
        
    public:

        void setDegats(float degatInit);
        float getDegats();
        Arme(float degats, typeArme type);
        Arme();
};