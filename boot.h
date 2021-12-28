#ifndef BOOT_H
#define BOOT_H

#include <string>
#include <stdlib.h>
#include <iostream>
//#include "speelveld.h"

//parent & abstract class
class Boot
{
    protected:
        int breedte;
        int x;
        int y;
        int coordinaat_x;
        int coordinaat_y;

    public:
    
        virtual int getBreedte() = 0;

        void setX(int x);
        void setY(int y);
        
};

#endif // BOOT_H


// https://en.cppreference.com/w/cpp/language/bit_field
// https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/