#ifndef PATROUILLESCHIP_H
#define PATROUILLESCHIP_H

#include <iostream>
#include <string>
#include "boot.h"

//child class (patrouilleschip) inhereting from base class (boot)
class Patrouilleschip : public Boot
{
    public:    
        Patrouilleschip() : Boot{ 2 } //default constructor
        {
        }
        Patrouilleschip(int x, int y) //specific constructor
            : Boot{ 2, x, y }
        {
        }
        ~Patrouilleschip() {
            cout<<"Inside Destructor patrouilleschip\n";
        }
};

#endif