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
    cout << "           SAO 0.1 by MOKS      " << endl <<endl;
}

// affichage du menu du jeu
void GestionAffichage::menuDuJeu(){

    cout <<"Menu du jeu" <<endl <<endl;
    cout <<"[1]- Boutique" <<endl;
    cout <<"[2]- Inventaire"<<endl;
    cout <<"[3]- Zone Aventure" <<endl;
    cout <<"[4]- Zone Labyrinthique" <<endl;
    cout <<"[5]- Zone du Boss" <<endl;
    cout <<"[6]- Sauvegarder la partie" <<endl;
    cout <<"[7]- Quitter la partie" <<endl<<endl;

}

// affichage de l'ecran de démarrage du jeu
void GestionAffichage::ecranDeDemarrage(){

cout << " \n           Ecran de demarrage" <<endl <<endl;


}

// efface l'ecran de la console
void GestionAffichage::purge(){
    system("cls");
}

// affichage du menu principal
void GestionAffichage::menuPrincipal(){
    cout << "Menu Principal" <<endl<<endl;
    cout << "[1]- Nouvelle partie " <<endl;
    cout << "[2]- Charger" <<endl;
    cout << "[3]- Statistiques" <<endl;
    cout << "[4]- Options" <<endl;
    cout << "[5]- Credits" <<endl;
    cout << "[6]- Quitter le jeu" <<endl<<endl;
}

// affichage d'une nouvelle partie
void GestionAffichage::nouvellePartie(){
    cout << "Bienvenue dans l'Aincrad ! Vous devez terminer les 100 etages pour gagner le jeu." <<endl<<endl;
    cout << "Il y a trois zones par etage : " <<endl;
    cout << "- La zone Aventure pour monter en niveaux, il faut battre 20 ennemis pour debloquer la zone labyrinthique." << endl;
    cout << "- La zone Labyrinthique, il faut tuer tous les ennemis de cette zone pour debloquer la zone du Boss." <<endl;
    cout << "- La zone du Boss, il faut tuer le boss pour passer a l'etage superieur." <<endl<<endl;
}

// affichage des parties disponibles pour continuer la partie
void GestionAffichage::continuerPartie(){
    cout << "Partie disponible";

}

// ecran pour la sauvegarde de la partie
void GestionAffichage::sauve(){
    cout << "Veuillez choisir un nom pour sauvegarder la partie -> " ;

}


void GestionAffichage::colorConsole(int k){


SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), k);



}
