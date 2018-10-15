#include "Menu.h"

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}

void Menu::setNom(string nom){

this->nom = nom;

}

string Menu::getNom(){

return nom;
}

void Menu::setId(int id){

this->id = id;

}

int Menu::getId(){

return id;
}

void Menu::afficheOptions(){

    cout <<" ##########";
        GestionAffichage::colorConsole(12); // fond noir ecriture rouge
    cout << this->getNom();
    GestionAffichage::colorConsole(10); // fond noir ecriture verte
    cout <<"############"<<endl;
    cout <<" #                                  #"<<endl;

    for(int i=0;i<254;i++){

        if (lesOptions[i].nomOptions!=""){
            cout << " #         ";
            cout <<lesOptions[i].nomOptions << "" ;
            cout <<endl;
        }
    }

    cout <<" #                                  #"<<endl;
    cout <<" ####################################"<<endl<<endl;
    leSelecteur.Locate(36,4); cout<<"#";
    leSelecteur.Locate(36,5); cout<<"#";
    leSelecteur.Locate(36,6); cout<<"#";
    leSelecteur.Locate(36,7); cout<<"#";
    leSelecteur.Locate(36,8); cout<<"#";
    leSelecteur.Locate(36,9); cout<<"#";

    leSelecteur.Locate(8,4); cout<<">";

    leSelecteur.Locate(1,13);
}

void Menu::setOptions(int pos, int valeur, string nomOptions){

this->lesOptions[pos].nomOptions = nomOptions;
this->lesOptions[pos].valeur = valeur;


}

int Menu::getSelecteurMenuPrincipal(){
int action = 0;

action = leSelecteur.ChoisirMenuPrincipal();

return action;
}
