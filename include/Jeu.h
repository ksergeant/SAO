#ifndef JEU_H
#define JEU_H

#include "Partie.h"
#include <vector>
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
        vector <Partie> lesParties; // stockage des parties






};

#endif // JEU_H
