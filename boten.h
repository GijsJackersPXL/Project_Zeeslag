#ifndef BOTEN_H
#define BOTEN_H

#include <string>
#include "speelveld.h"

class boten
{
        virtual int breedte() = 0;

        /*
	public enum boten {
                vliegdekschip, slagschip, Torpedobootjager, Patrouilleschip;
        }
	*/
};

#endif // BOTEN_H

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