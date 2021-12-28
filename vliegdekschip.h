#ifndef VLIEGDEKSCHIP_H
#define VLIEGDEKSCHIP_H

#include <string>
#include "boot.h"

//child class (vliegdekschip) inhereting from base class (boot)
class Vliegdekschip : public Boot
{
    protected:
        int breedte = 5;
    public:
        int getBreedte(){
            return (breedte);
        }

};

#endif