#include <iostream>
#include "Daire.h"

using namespace std;

int main()
{
    double daire_yaricap;//kullanicidan yaricap alinir.
    cout << "Dairenin Yaricapini Giriniz:";
    cin >> daire_yaricap;

    Daire daire_nesnesi(daire_yaricap);//parametreli yapiciya ilk deger atamasi
    daire_nesnesi.print();

    return 0;
}
