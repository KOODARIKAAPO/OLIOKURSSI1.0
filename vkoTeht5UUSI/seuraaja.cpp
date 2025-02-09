#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string s)
{
    cout << "seuraaja " << nimi << "viesti" << s << endl;
}

