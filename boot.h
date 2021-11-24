#ifndef BOOT_H
#define BOOT_H

#include <string>
#include "speelveld.h"

class boot
{
        virtual int breedte() = 0;

        // x
        // y
        // breedte => hit
        // polymorfisme
        // elke boot in aparte .h

};

#endif // BOOT_H

/*

#include<iostream>
using namespace std;
  
class Base
{
public:
    virtual void show() = 0;
};
  
class Derived: public Base
{
public:
    void show() { cout << "In Derived \n"; }
};
  
int main(void)
{
    Base *bp = new Derived();
    bp->show();
    return 0;
}

*/

/*
public enum boten 
{
        vliegdekschip, slagschip, Torpedobootjager, Patrouilleschip;
}
*/