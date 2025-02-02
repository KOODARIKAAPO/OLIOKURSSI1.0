#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
#include <iostream>


class LuottoTili : public PankkiTili
{
public:

    LuottoTili(string,double);
    virtual bool deposit (double) override;
    virtual bool withdraw (double) override;

protected:

    double luottoRaja = 0;

};

#endif // LUOTTOTILI_H
