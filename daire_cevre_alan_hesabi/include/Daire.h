#ifndef DAIRE_H
#define DAIRE_H
#include <iostream>

using namespace std;
class Daire
{
    public:
        Daire(int); //parametreli yapici
        double daire_cevre();
        double daire_alan();
        void print();
    private:
        int yaricap;
};

#endif // DAIRE_H

