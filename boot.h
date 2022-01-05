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
            Boot(int formaat) : breedte { formaat } 
            {
                // cout << "Geef de x coordinaat voor de boot: ";
                // cin >> coordinaat_x;
                // //cout << coordinaat_x;
                // cout << "Geef de y coordinaat voor de boot: ";
                // cin >> coordinaat_y;
                // //cout << coordinaat_y;
                // setPositie(coordinaat_x, coordinaat_y);
            }
            Boot(int formaat, int x, int y) : breedte { formaat } , coordinaat_x { x }, coordinaat_y { y }{}
            virtual ~Boot() {} //Destructor
            
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