#ifndef TORPEDOBOOTJAGER_H
#define TORPEDOBOOTJAGER_H

#include <string>
#include "boot.h"

//child class (torpedobootjager) inhereting from base class (boot)
class Torpedobootjager : public Boot
{
    protected:
        int breedte = 3;
    public:
        int getBreedte(){
            return (breedte);
        }

};

#endif