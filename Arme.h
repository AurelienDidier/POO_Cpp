#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
    public:

        Arme();
        Arme(std::string nomInit, float degatsInit);
        float getDegats() const;

    private:

        std::string nom;
        float degats;
};

#endif
