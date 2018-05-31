#ifndef JEU_H
#define JEU_H

#include <iostream>
#include "GestionAffichage.h"
#include "Partie.h"

using namespace std;

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();
        void gameLaunch();
        void gameRunning();
        bool gameStop();


    protected:

    private:
         bool etatGame;
        Partie lesParties[3];



};

#endif // JEU_H
