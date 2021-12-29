#ifndef TORPEDOBOOTJAGER_H
#define TORPEDOBOOTJAGER_H

#include <string>
#include "boot.h"

//child class (torpedobootjager) inhereting from base class (boot)
class Torpedobootjager : public Boot
{
    public: 
        Torpedobootjager() : Boot{ 3 } //default constructor
        {
        }
        Torpedobootjager(int x, int y) //specific constructor
            : Boot{ 3, x, y }
        {
        }
};

#endif