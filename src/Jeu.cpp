#include "Jeu.h"


Jeu::Jeu()
{
    gameStart = true;
    cout << "Lancement du jeu" <<endl;
    //ctor
}

Jeu::~Jeu()
{
    //dtor
}

bool Jeu::Stop(){

gameStart=false;
cout << "Fermeture du jeu" <<endl;
return gameStart;
}
