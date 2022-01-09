#ifndef BOOT_H
#define BOOT_H

#include "includeHeaders.h"
using namespace std;

namespace ZEESLAG
{
    //parent class
    class Boot
    {
        protected:
            int breedte;
            int coordinaat_x;
            int coordinaat_y;
            bool gezonken; //meerdere geraakt => gezonken
            void setBreedte(int formaat);
            int getX();
            int getY();
            int getBreedte();
            void setX(int x);
            void setY(int y);
            void setPositie(int x, int y);

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
            
            friend class Speelveld;
    };
}

#endif // BOOT_H