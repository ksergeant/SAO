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
        static int getNombrePartie();

    protected:

    private:
        bool etatGame;
        vector <Partie> lesParties;






};

#endif // JEU_H
