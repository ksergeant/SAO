#include "Partie.h"

using namespace std;
Partie::Partie()
{
    //ctor
}

Partie::~Partie()
{
    //dtor
}

void Partie::nouvellePartie(){
    cout << "Creation d'une nouvelle partie" << endl;
    GestionAffichage::intro();
/*
    purge();
    enTete();
    intro();
    string nom;
    cout << "Veuillez choisir le nom de votre personnage -> " ;
    cin >> nom;
    purge();
    enTete();
    menuPrincipal();
    Personnage Perso1(nom);
    Perso1.getNom();
    Perso1.getStats();
    */
}

void Partie::continuerPartie(){


}

void Partie::partieRunning(){

    while (etatPartie==true){


    }

}

void Partie::partieStop(){
etatPartie = false;

}

