#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa (Seuraaja*);
    void poista (Seuraaja*);
    void tulosta();
    void postita(string);

    Seuraaja *getSeuraajat() const;
    void setSeuraajat(Seuraaja *newSeuraajat);

private:
    Seuraaja* seuraajat=nullptr;
};

#endif // NOTIFIKAATTORI_H
