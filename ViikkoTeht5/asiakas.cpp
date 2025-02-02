#include "asiakas.h"


Asiakas::Asiakas(string nimi,double raja) : kayttotili(nimi), luottotili(nimi,raja)
{
    this->nimi=nimi;
}

void Asiakas :: showSaldo()
{
    cout<< "asiakas: " << nimi << endl;
    cout << "Tilien saldo: " << this->kayttotili.getBalance() << endl;

    cout << "luotto tili saldo: " << this->luottotili.getBalance() << endl;
}

bool Asiakas :: talletus(double summa)
{
    return kayttotili.deposit(summa);

}
bool Asiakas :: nosto(double n)
{
    return kayttotili.withdraw(n);
}

bool Asiakas::luotonMaksu(double m)
{
    return luottotili.deposit(m);

}

bool Asiakas::luotonNosto(double nosto)
{
    return luottotili.withdraw(nosto);
}
bool Asiakas :: tiliSiirto(double summa, Asiakas& vastaanottaja){

    if (summa<=0)
    {
        cout << "Et voi siirtää negatiivistä summaa"<<endl;
        return false;
    }

    if (!kayttotili.withdraw(summa))
    {
        cout << "ei riittävästi varoja" << endl;
        return false;
    }

    if (!vastaanottaja.kayttotili.deposit(summa))
    {
    cout << "siirto epäonnistui: tilivirhe" << endl;
        return false;
    }

    cout << "Siirretty summa: " << summa << endl;

}
