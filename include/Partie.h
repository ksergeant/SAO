#ifndef PARTIE_H
#define PARTIE_H

#include <iostream>
#include <string>
#include "GestionAffichage.h"
#include "Personnage.h"
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
        Personnage Perso1;
        bool etatPartie;
};

#endif // PARTIE_H
