#ifndef SLAGSCHIP_H
#define SLAGSCHIP_H

#include <string>
#include "boot.h"

//child class (slagschip) inhereting from base class (boot)
class Slagschip : public Boot
{
    protected:
        int breedte = 4;
    public:
        int getBreedte(){
            return (breedte);
        }

};

#endif