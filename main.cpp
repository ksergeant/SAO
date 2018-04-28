#include <SFML/Audio.hpp>
#include <iostream>

using namespace std;

int main()
{
    cout << "##### SAO 0.1 #####" << endl <<endl;

    sf::Music music;
    if (!music.openFromFile("mainTrack.ogg"))
    return -1; // erreur
    music.play();

    int i;
    cin >> i;


    return 0;
}
