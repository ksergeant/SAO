#ifndef SELECTEUR_H
#define SELECTEUR_H

#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

class Selecteur
{
    public:
        Selecteur();
        virtual ~Selecteur();
        void Locate(int x,int y);
        void Afficher(int curs);
        int ChoisirMenuPrincipal();

    protected:

    private:
};

#endif // SELECTEUR_H
