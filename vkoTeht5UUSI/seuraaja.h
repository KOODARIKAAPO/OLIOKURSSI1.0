#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
#include <string>
using namespace std;
class Seuraaja
{
public:
    Seuraaja(string);
    Seuraaja* next = nullptr;
    string getNimi();
    void paivitys(string);

private:
    string nimi;
};

#endif // SEURAAJA_H
