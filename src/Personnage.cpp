#include "Personnage.h"
#include "../Fonctions.h"

using namespace std;

Personnage::Personnage(){

}

Personnage::Personnage(string nom){
    this->nom = nom;
}

Personnage::~Personnage(){
    //dtor
}

void Personnage::getStats(){

cout <<"Niveau : "<<niveau <<endl;
cout <<"Vie : " <<vie <<endl;
cout <<"defense : "<< defense <<endl;
cout <<"XP : " << xp << endl;
cout <<"Degats : " << degats << endl;
}

void Personnage::getNom(){

cout << "Nom : " <<nom <<endl;
}
