#ifndef BOOT_H
#define BOOT_H

#include "includeHeaders.h"
//#include "speelveld.h"
using namespace std;

namespace ZEESLAG
{
    //parent & abstract class
    class Boot
    {
        protected:
            int breedte;
            int coordinaat_x;
            int coordinaat_y;
            void setBreedte(int formaat);

        public:
            Boot(int formaat) : breedte { formaat } {}
            Boot(int formaat, int x, int y) : breedte { formaat } , coordinaat_x { x }, coordinaat_y { y }{}
            ~Boot() {} //Destructor
            
            int getX();
            int getY();
            int getBreedte();
            void setX(int x);
            void setY(int y);
            void setPositie(int x, int y);
    };
}

#endif // BOOT_H


// https://en.cppreference.com/w/cpp/language/bit_field
// https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/