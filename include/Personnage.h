#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include<iostream>
using namespace std;

class Personnage
{
    public:
        Personnage();
        Personnage(string nom);
        void getStats();
        void getNom();
        void setNom(string name);
        virtual ~Personnage();

    protected:

    private:
        string nom;
        int niveau = 1;
        int vie = 100;
        int defense = 0;
        int xp = 0;
        int degats = 5;



};

#endif // PERSONNAGE_H
