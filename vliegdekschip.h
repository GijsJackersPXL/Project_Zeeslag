#ifndef VLIEGDEKSCHIP_H
#define VLIEGDEKSCHIP_H

#include <string>
#include "boot.h"

//child class (vliegdekschip) inhereting from base class (boot)
class Vliegdekschip : public Boot
{
    public:
        Vliegdekschip() : Boot{ 5 } //default constructor
        {
        }
        Vliegdekschip(int x, int y) //specific constructor
            : Boot{ 5, x, y }
        {
        }
};

#endif