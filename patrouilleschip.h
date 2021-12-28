#ifndef PATROUILLESCHIP_H
#define PATROUILLESCHIP_H

#include <iostream>
#include <string>
#include "boot.h"

//child class (patrouilleschip) inhereting from base class (boot)
class Patrouilleschip : public Boot
{
    protected:
        int breedte = 2;
    public:
        int getBreedte()
        {
            return (breedte);
        }
        
};

#endif