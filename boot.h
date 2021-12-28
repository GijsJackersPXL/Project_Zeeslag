#ifndef BOOT_H
#define BOOT_H

#include <string>
#include "speelveld.h"

//parent & abstract class
class boot
{
    protected:
        int breedte;
        int x;
        int y;
        int coordinaat_x;
        int coordinaat_y;

    public:
    
        virtual int getBreedte() = 0;

        int setX(int x){
            coordinaat_x = x;
        }

        int setY(int y){
            coordinaat_y = y;
        }
    
        

};

#endif // BOOT_H


// https://en.cppreference.com/w/cpp/language/bit_field
// https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/