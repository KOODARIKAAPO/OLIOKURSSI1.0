#include "pankkitili.h"

PankkiTili :: PankkiTili(string nimi) {
    omistaja=nimi;
};

double PankkiTili :: getBalance()
{
    return saldo;
};

bool PankkiTili :: deposit(double S)
{
    saldo = saldo + S;
    cout << "Tilille lisätty: " << S << endl;
    return true;
};

bool PankkiTili :: withdraw(double W)
{
    if (W >= saldo)
    {

        cout << "Varoja ei tarpeeksi." << endl;
        return false;
    }
    else
    {
        saldo = saldo - W;
               cout << "Varoja nostettu: " << W << endl;
         return true;
    }
}
