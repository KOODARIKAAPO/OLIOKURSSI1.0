#include "notifikaattori.h"

Notifikaattori :: Notifikaattori()
{
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja* uusi)
{
    uusi->next = seuraajat;
    seuraajat = uusi;
}

void Notifikaattori::poista(Seuraaja * poistettava)
{
    if(seuraajat == nullptr) return;

    if  (seuraajat == poistettava)
        {
            seuraajat = seuraajat->next;
            return;
        }

    Seuraaja* nykyinen = seuraajat;
    while (nykyinen->next != nullptr)
    {
        if (nykyinen->next == poistettava)
        {
            nykyinen->next = poistettava->next;
                             return;
        }
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr)
    {
        cout << nykyinen->getNimi() << endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen!=nullptr)
    {
        nykyinen->paivitys(viesti);
        nykyinen=nykyinen->next;
    }
}

