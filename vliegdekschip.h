#ifndef VLIEGDEKSCHIP_H
#define VLIEGDEKSCHIP_H

#include <string>


//child class (vliegdekschip) inhereting from base class (boot)
class vliegdekschip : public boot
{
    protected:
        int breedte = 5;
    public:
        int getBreedte(){
            retrun (breedte);
        }

};