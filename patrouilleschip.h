#ifndef PATROUILLESCHIP_H
#define PATROUILLESCHIP_H

#include <string>


//child class (patrouilleschip) inhereting from base class (boot)
class patrouilleschip : public boot
{
    protected:
        int breedte = 2;
    public:
        int getBreedte(){
            retrun (breedte);
        }

        
};