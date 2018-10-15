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
void Selecteur::ActionMenuPrincipal(int curs)
{
    Locate(8,4);
    printf("%c ",(curs==0)?'>':' ');
    Locate(8,5);
    printf("%c ",(curs==1)?'>':' ');
    Locate(8,6);
    printf("%c ",(curs==2)?'>':' ');
    Locate(8,7);
    printf("%c ",(curs==3)?'>':' ');
    Locate(8,8);
    printf("%c ",(curs==4)?'>':' ');
    Locate(8,9);
    printf("%c ",(curs==5)?'>':' ');
    Locate(8,10);

}

int Selecteur::ChoisirMenuPrincipal()
{
    int curs = 0;
    int touche;
    do
    {
        ActionMenuPrincipal(curs);
        Locate(0,13);
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
           else if (touche==0x50 && curs==3)
                curs =4;
           else if (touche==0x50 && curs==4)
                curs =5;

           else if (touche==0x48 && curs==1)  // fleche haut
                curs = 0;
           else if (touche==0x48 && curs==2)
                curs = 1;
           else if (touche==0x48 && curs==3)
                curs = 2;
           else if (touche==0x48 && curs==4)
                curs = 3;
           else if (touche==0x48 && curs==5)
                curs = 4;

        }
    } while (touche!=0x0D);  // enter
    return curs;
}
