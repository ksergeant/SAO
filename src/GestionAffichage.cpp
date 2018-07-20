#include "GestionAffichage.h"

using namespace std;

GestionAffichage::GestionAffichage()
{
    //ctor
}

GestionAffichage::~GestionAffichage()
{
    //dtor
}

// affichage de l'entete du programme
void GestionAffichage::enTete(){
    cout << "##### SAO 0.1 by MOKS #####" << endl <<endl;
}

// affichage du menu principal
void GestionAffichage::menuPrincipal(){
    cout <<"[1]- Boutique" <<endl;
    cout <<"[2]- Zone Aventure" <<endl;
    cout <<"[3]- Zone Labyrinthique" <<endl;
    cout <<"[4]- Zone du Boss" <<endl;
    cout <<"[5]- Sauvegarder la partie" <<endl;
    cout <<"[6]- Quitter la partie" <<endl<<endl;

}

// intro lors d'une nouvelle partie
void GestionAffichage::intro(){
    cout << "Bienvenue dans l'Aincrad ! Vous devez terminer les 100 etages pour gagner le jeu." <<endl<<endl;
    cout << "Il y a trois zones par etage : " <<endl;
    cout << "- La zone Aventure pour monter en niveaux, il faut battre 20 ennemis pour debloquer la zone labyrinthique." << endl;
    cout << "- La zone Labyrinthique, il faut tuer tous les ennemis de cette zone pour debloquer la zone du Boss." <<endl;
    cout << "- La zone du Boss, il faut tuer le boss pour passer a l'etage superieur." <<endl<<endl;
}

// efface l'ecran de la console
void GestionAffichage::purge(){
    system("cls");
}

// affichage de l'ecran de démarrage du jeu
void GestionAffichage::ecranDeDemarrage(){
    cout << "[1]- Nouvelle partie " <<endl;
    cout << "[2]- Continuer la partie" <<endl;
    cout << "[3]- Quitter le jeu" <<endl<<endl;
}

// affichage d'une nouvelle partie
void GestionAffichage::nouvellePartie(){

}

// affichage des parties disponibles pour continuer la partie
void GestionAffichage::continuerPartie(){
    cout << "Partie disponible";

}

// ecran pour la sauvegarde de la partie
void GestionAffichage::sauve(){
    cout << "Veuillez choisir un nom pour sauvegarder la partie -> " ;

}



