#include "Jeu.h"


Jeu::Jeu()
{

    //ctor
}

Jeu::~Jeu()
{
    //dtor
}

void Jeu::gameLaunch(){
    etatGame = true;

    GestionAffichage::enTete();
    gameRunning();


}

void Jeu::gameRunning(){
    int choix = 0;

    while(etatGame==true){
    GestionAffichage::ecranDeDemarrage();
         cin >> choix;
        switch(choix){
        case 1:
            GestionAffichage::nouvellePartie();
            lesParties[0].nouvellePartie();
            break;
        case 2:
            lesParties[0].continuerPartie();
            break;
        case 3:
           gameStop();
            break;
        default:
            cout << "Erreur dans votre choix" <<endl;
            break;
    }


    }

}

bool Jeu::gameStop(){

etatGame=false;
cout << "Fermeture du jeu" <<endl;
return etatGame;
}
