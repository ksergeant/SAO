#include "Personnage.h"


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
cout <<"Degats : " << degats << endl<<endl;
}

void Personnage::getNom(){

cout << "Nom : " <<nom <<endl;
}

void Personnage::setNom(string name){
nom = name;

}
