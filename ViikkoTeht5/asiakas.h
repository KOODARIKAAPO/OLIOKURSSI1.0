#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "luottotili.h"
#include "pankkitili.h"



class Asiakas
{
public:
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto (double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double summa, Asiakas& vastaanottaja);

private:
    string nimi;
    PankkiTili kayttotili;
    LuottoTili luottotili;
};

#endif // ASIAKAS_H
