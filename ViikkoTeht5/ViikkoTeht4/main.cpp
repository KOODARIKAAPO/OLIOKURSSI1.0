#include <iostream>
#include"Pankkitili.h"
#include"LuottoTili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    PankkiTili* tili = new PankkiTili("Josef Stalin");


    tili->deposit(100);
    tili->withdraw(50);
    cout << "Tilin saldo: " << tili->getBalance() << endl;
    delete tili;

    LuottoTili* tili1 = new LuottoTili("Lenin", 1000);

    tili->deposit(100);
    tili->withdraw(50);
    cout << "Tilin saldo: " << tili1->getBalance() << endl;
    delete tili1;

    Asiakas* tili2 = new Asiakas ("Karl Marx", 1000);
    tili2->talletus(100);
    tili2->luotonNosto(20);
    tili2->luotonMaksu(100);
    tili2->nosto(100);
    tili2->showSaldo();

    delete tili2;

    Asiakas asiakas1 ("Pol Pot",1000);
    Asiakas asiakas2 ("Mao",500);

    asiakas1.talletus(500);
    asiakas1.showSaldo();
    asiakas2.talletus(500);
    asiakas2.showSaldo();

    if(asiakas1.tiliSiirto(200,asiakas2))
    {
        cout << "siirto onnistui!" <<endl;
    }
    else{
        cout << "siirto epäonnistui." << endl;
    }


    return 0;
};
