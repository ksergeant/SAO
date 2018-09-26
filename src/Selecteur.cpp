#include "Selecteur.h"

using namespace std;

Selecteur::Selecteur()
{
    //ctor
}

Selecteur::~Selecteur()
{
    //dtor
}

// gestion de la console pour l'affichage
void Selecteur::Locate(int x,int y)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD C;
    C.X=(SHORT)x;
    C.Y=(SHORT)y;
    SetConsoleCursorPosition(H,C);
}
// gestion affichage du selecteur
void Selecteur::Afficher(int curs)
{
    Locate(6,2);
//    printf("%c ",(curs==0)?'>':' '); cout << menu1.getNouvellePartie() <<endl;
    Locate(6,3);
  //  printf("%c ",(curs==1)?'>':' '); cout << menu1.getContinuerPartie() <<endl;
    Locate(6,4);
  //  printf("%c ",(curs==2)?'>':' '); cout << menu1.getOptions() <<endl;
    Locate(6,5);
  //  printf("%c ",(curs==3)?'>':' '); cout << menu1.getQuitterJeu() <<endl;
    Locate(6,7);
}

int Selecteur::ChoisirMenuPrincipal()
{
    int curs = 0;
    int touche;
    do
    {
        Afficher(curs);
        touche = _getch();
        if (touche==0xE0) // fleche : le code fleche renvoie 2 caracteres.
        {
            touche = _getch();
            if (touche==0x50 && curs==0)  // fleche bas
                curs = 1;
           else if (touche==0x50 && curs==1)
                curs = 2;
           else if (touche==0x50 && curs==2)
                curs = 3;
           else if (touche==0x48 && curs==1)  // fleche haut
                curs = 0;
           else if (touche==0x48 && curs==2)
                curs = 1;
          else if (touche==0x48 && curs==3)
                curs = 2;
        }
    } while (touche!=0x0D);  // enter
    return curs;
}
