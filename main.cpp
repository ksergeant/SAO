#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "##### SAO 0.1 #####" << endl <<endl;

    sf::Music music;
    if (!music.openFromFile("mainTrack.ogg"))
    return -1; // erreur
    music.play();
    string nom;
    cout << "Veuillez choisir le nom de votre personnage -> " ;
    cin >> nom;








    return 0;
}
