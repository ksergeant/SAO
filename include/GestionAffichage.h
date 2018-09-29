#ifndef GESTIONAFFICHAGE_H
#define GESTIONAFFICHAGE_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <windows.h>

using namespace std;

class GestionAffichage
{
    public:
        GestionAffichage();
        virtual ~GestionAffichage();

        static void enTete();
        static void menuPrincipal();
        static void menuDuJeu();
        static void intro();
        static void purge();
        static void ecranDeDemarrage();
        static void nouvellePartie();
        static void continuerPartie();
        static void sauve();
        static void nombrePartie();
        static void colorConsole(int k);

    protected:

    private:


};

#endif // GESTIONAFFICHAGE_H
