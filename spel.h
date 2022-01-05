#ifndef SPEL_H
#define SPEL_H

#include "includeHeaders.h"
#include "speler.h"

namespace ZEESLAG
{
    class Spel
    {
        private:
            Speler speler1;
            Speler speler2;

        public: 
            Spel() { /* intro(); */ /* spelersAanmaken(); */ /* outro(); */ }
            Spel(bool i) { uitleg(); }
            void intro();
            void uitleg();
            void outro();
            //void spelersAanmaken();
            void printbreedte();
    };
}

#endif // SPEL_H