#ifndef DUIKBOOT_H
#define DUIKBOOT_H

#include "includeHeaders.h"
#include "boot.h"

namespace ZEESLAG
{
    //child class (duikboot) inhereting from base class (boot)
    class Duikboot : public Boot
    {
        public: 
            Duikboot() : Boot{ 3 } //default constructor
            {
            }
            Duikboot(int x, int y) //specific constructor
                : Boot{ 3, x, y }
            {
            }
    };
}
#endif