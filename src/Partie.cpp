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
        int choix = 0;
    while (etatPartie==true){
        GestionAffichage::menuPrincipal();
        cin >> choix;

            switch(choix){

                case 1:
                     GestionAffichage::purge();
                     GestionAffichage::enTete();
                     cout <<"Bienvienue dans la Boutique" <<endl;
                break;

                case 2:
                     GestionAffichage::purge();
                     GestionAffichage::enTete();
                     cout <<"Bienvenue dans la Zone Aventure" <<endl;
                break;

                case 3:
                    GestionAffichage::purge();
                     GestionAffichage::enTete();
                    cout <<"Bienvenue dans la Zone Labyrinthique" <<endl;
                break;

                case 4:
                    GestionAffichage::purge();
                     GestionAffichage::enTete();
                    cout <<"Bienvenue dans la Zone du Boss" <<endl;
                break;

                case 5:
                    GestionAffichage::purge();
                     GestionAffichage::enTete();
                cout <<"Sauvegarde la partie en cours" <<endl;
                break;

                case 6:
                    GestionAffichage::purge();
                     GestionAffichage::enTete();
                    cout << "fermeture de la partie" <<endl;
                    etatPartie=false;
                break;

                default:
                    GestionAffichage::purge();
                     GestionAffichage::enTete();
                     cout << "Erreur dans votre choix" <<endl;
                break;

            }





    }

}

void Partie::partieStop(){
etatPartie = false;

}

