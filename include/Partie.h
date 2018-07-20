#ifndef PARTIE_H
#define PARTIE_H

#include <iostream>
#include <string>
#include "GestionAffichage.h"
#include "Personnage.h"
#include "Selecteur.h"
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
        void sauvegardePartie();
        string getName();

    protected:

    private:
        string name;
        Personnage Perso1;
        bool etatPartie;
};

#endif // PARTIE_H
