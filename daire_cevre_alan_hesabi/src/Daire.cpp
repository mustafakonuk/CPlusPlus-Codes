#include "Daire.h"

Daire::Daire(int Yaricap)
{
    yaricap = Yaricap;
}
double Daire::daire_cevre()
{
    return 2*(3.14)*yaricap;
}
double Daire::daire_alan()
{
    return (3.14)*yaricap*yaricap;
}
void Daire::print()
{
    cout << "Dairenin Alani:" << daire_alan() << endl;
    cout << "Dairenin Cevresi:" << daire_cevre() << endl;
}
