#include "Jeu.h"

using namespace std;

Jeu::Jeu()
{

    //ctor
}

Jeu::~Jeu()
{
    //dtor
}

void Jeu::initialiseMenu(){

lesMenusJeu[0].setId(0);
lesMenusJeu[0].setNom("MENU PRINCIPAL");

lesMenusJeu[0].setOptions(0,1,"Nouvelle partie");
lesMenusJeu[0].setOptions(1,2,"Charger");
lesMenusJeu[0].setOptions(2,3,"Statistiques");
lesMenusJeu[0].setOptions(3,4,"Options");
lesMenusJeu[0].setOptions(4,5,"Credits");
lesMenusJeu[0].setOptions(5,6,"Quitter le jeu");
}


// Fonction d'entree du jeu
void Jeu::gameLaunch(){
    etatGame = true;

    GestionAffichage::enTete();
    GestionAffichage::ecranDeDemarrage();
    int c =_getch();

    gameRunning();

}

// fonction principale  qui gere le menu de démarrage
void Jeu::gameRunning(){
    int choix = 0;

    while(etatGame==true){
        GestionAffichage::purge();
        GestionAffichage::enTete();
        initialiseMenu();

        while (choix !=7){
                lesMenusJeu[0].afficheOptions();
                choix = _getch();
    // selon le choix effectué le switch case active la case en question
        switch(choix){
            case 1:
                GestionAffichage::purge();
                GestionAffichage::enTete();
                GestionAffichage::nouvellePartie();

                // lesParties[0].nouvellePartie();
                // lesParties[0].partieRunning();
            break;

            case 2:
                // lesParties[0].continuerPartie();
            break;

            case 3:
            gameStop();
            break;

            case 4:
            break;

            case 5:
            break;

            case 6:
            break;

            case 7:
            break;


            default:
            cout << "Erreur dans votre choix" <<endl;
            break;
        }

     }
   }

}

bool Jeu::gameStop(){

etatGame=false;
cout << "Fermeture du jeu" <<endl;
return etatGame;
}
