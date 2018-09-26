#ifndef JEU_H
#define JEU_H

#include <vector>
#include "Selecteur.h"
#include "Partie.h"
#include "Menu.h"

using namespace std;

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();
        void gameLaunch();
        void gameRunning();
        bool gameStop();
        void initialiseMenu();


    protected:

    private:
        bool etatGame;
        vector <Partie> lesParties; // stockage des parties
        Menu lesMenusJeu[255];
        Selecteur monSelecteur;




};

#endif // JEU_H
