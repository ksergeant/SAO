#ifndef PARTIE_H
#define PARTIE_H

#include <iostream>
#include "GestionAffichage.h"
using namespace std;
class Partie
{
    public:
        Partie();
        virtual ~Partie();
        void nouvellePartie();
        void continuerPartie();
        void partieRunning();
        void partieStop();

    protected:

    private:
        bool etatPartie;
};

#endif // PARTIE_H
