#ifndef MONDE_H
#define MONDE_H

#include "Etage.h"
#include "ZoneAventure.h"
#include "ZoneLaby.h"
#include "ZoneBoss.h"
#include "Ennemi.h"
#include "Boss.h"
#include "Carte.h"
#include "Personnage.h"
#include <vector>

using namespace std;

class Monde
{
    public:
        Monde();
        virtual ~Monde();

    protected:

    private:
        Personnage heros;
        vector <Etage> lesEtages;
        vector <ZoneAventure> lesZonesA;
        vector <ZoneLaby> lesZonesL;
        vector <ZoneBoss> lesZonesB;
        vector <Ennemi> lesEnnemis;
        vector <Boss> lesBoss;
        vector <Carte> lesCartes;

};

#endif // MONDE_H
