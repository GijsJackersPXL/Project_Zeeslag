#ifndef SLAGSCHIP_H
#define SLAGSCHIP_H

#include <string>
#include "boot.h"

//child class (slagschip) inhereting from base class (boot)
class Slagschip : public Boot
{
    public:
        Slagschip() : Boot{ 4 } //default constructor
        {
        }
        Slagschip(int x, int y) //specific constructor
            : Boot{ 4, x, y }
        {
        }
};

#endif