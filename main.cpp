#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include "Fonctions.h"
#include "Personnage.h"

using namespace std;

int main()
{
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
            quitterLeJeu();
            break;
        default:
            cout << "Erreur dans votre choix" <<endl;
            break;
    }

    /*
    sf::Music music;
    if (!music.openFromFile("mainTrack.ogg"))
    return -1; // erreur

    music.play();
    */

    return 0;
}
