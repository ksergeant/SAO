#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include "Jeu.h"
#include "Personnage.h"

using namespace std;

int main()
{

    Jeu jeu1;
    jeu1.gameLaunch();
    /*
    sf::Music music;
    if (!music.openFromFile("Sounds\mainTrack.ogg"))
    return -1; // erreur

    music.play();
    */

    return 0;
}
