#ifndef SELECTEUR_H
#define SELECTEUR_H

#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Menu.h"

using namespace std;

class Selecteur
{
    public:
        Selecteur();
        virtual ~Selecteur();
        void Locate(int x,int y);
        void Afficher(int curs, Menu menu1);
        int Choisir(Menu menu1);

    protected:

    private:
};

#endif // SELECTEUR_H
