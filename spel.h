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
            Speelveld speelveldSpeler1;
            //bool geschotenPuntenSpeler1[10][10] {};
            Speler speler2;
            Speelveld speelveldSpeler1;
            //bool geschotenPuntenSpeler2[10][10] {};

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