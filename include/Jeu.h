#ifndef JEU_H
#define JEU_H

#include <iostream>
using namespace std;

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();
        bool Stop();

    protected:

    private:
        bool gameStart;

};

#endif // JEU_H
