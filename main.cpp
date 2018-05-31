#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include "Jeu.h"
#include "Fonctions.h"
#include "Personnage.h"

using namespace std;

int main()
{
    Jeu jeu1;
    int choix = 0;
    enTete();

    ecranDeDemarrage();
    cin >> choix;
    switch(choix){
        case 1:
            nouvellePartie();
            break;
        case 2:
            continuerPartie();
            break;
        case 3:
             jeu1.Stop();
            quitterLeJeu();
            break;
        default:
            cout << "Erreur dans votre choix" <<endl;
            break;
    }

    /*
    sf::Music music;
    if (!music.openFromFile("Sounds\mainTrack.ogg"))
    return -1; // erreur

    music.play();
    */

    return 0;
}
