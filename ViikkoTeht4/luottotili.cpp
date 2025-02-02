#include "luottotili.h"
#include <iostream>

LuottoTili :: LuottoTili(string nimi, double raja) : PankkiTili(nimi)
{
    luottoRaja= -raja;
    cout << "Luottotili luotu " << omistaja << endl;
}

bool LuottoTili :: deposit (double d)
{
    if (d<0){
        cout << "Ei negatiivisia talletuksia."<<endl;
    return false;
}
 saldo += d;
if (saldo>0){
    saldo = 0;
    cout << "luottotili on maksettu takaisin." << endl;
}
    return true;
}

bool LuottoTili :: withdraw (double w)
{
    double valitulos = saldo-w;

    if (valitulos < luottoRaja)
    {
        cout << "Luottoraja ylittyi " << endl;
        return false;
    }
    else
    {
        saldo = valitulos;
        cout << " Luottoa käytetty " << endl;
        return true;
    }
};
