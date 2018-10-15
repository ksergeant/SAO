#ifndef MENU_H
#define MENU_H

#include <string>
#include <iostream>
#include "Selecteur.h"
using namespace std;

struct Options{

int valeur;
string nomOptions;

};

class Menu
{
    public:
        Menu();
        void setNom(string nom);
        string getNom();
        void setId(int id);
        int getId();
        void afficheOptions();
        void setOptions(int pos, int valeur, string nomOptions);
        int getSelecteurMenuPrincipal();

        virtual ~Menu();

    protected:

    private:
        int id ;
        string nom;
        Options lesOptions[255];
        Selecteur leSelecteur;

};

#endif // MENU_H
