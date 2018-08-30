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
    GestionAffichage::nouvellePartie();
    string nom;
    cout << "Veuillez choisir le nom de votre personnage -> " ;
    cin >> nom ;
    cout <<endl;
    Perso1.setNom(nom); // l'objet Perso1 contenu dans partie utilise la méthode set pour modifier l'attribut nom contenu dans Perso1
    Perso1.getNom();    // affiche l'attribut nom du Perso1
    Perso1.getStats();  // affiche les attributs concernant les stats du Perso1

}

void Partie::continuerPartie(){


}

void Partie::partieRunning(){
    etatPartie = true;
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
                    sauvegardePartie();
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

void Partie::sauvegardePartie(){
    string nom;
    GestionAffichage::sauve();
    cin >>nom;
    name = nom; // nom de la partie
    cout << "Nom de la Partie : "<< getName() <<endl;
}

string Partie::getName(){

return name;

}




























