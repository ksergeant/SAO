#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include "Fonctions.h"
#include "Personnage.h"

using namespace std;

int main()
{
    enTete();
    sf::Music music;
    if (!music.openFromFile("mainTrack.ogg"))
    return -1; // erreur

    music.play();

    string nom;
    cout << "Veuillez choisir le nom de votre personnage -> " ;
    cin >> nom;
    Personnage Perso1(nom);
    purge();
    enTete();
    intro();
    Perso1.getNom();
    Perso1.getStats();
    return 0;
}
