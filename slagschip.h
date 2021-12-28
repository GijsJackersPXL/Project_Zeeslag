#ifndef SLAGSCHIP_H
#define SLAGSCHIP_H

#include <string>


//child class (slagschip) inhereting from base class (boot)
class slagschip : public boot
{
   protected:
        int breedte = 4;
    public:
        int getBreedte(){
            retrun (breedte);
        }

};