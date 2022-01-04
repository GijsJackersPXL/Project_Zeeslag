#ifndef PATROUILLESCHIP_H
#define PATROUILLESCHIP_H

#include "includeHeaders.h"

#include "boot.h"
namespace ZEESLAG
{
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
            ~Patrouilleschip() { //Destructor patrouilleschip
                //cout<<"Inside Destructor patrouilleschip\n";
            }
    };
   
}

#endif