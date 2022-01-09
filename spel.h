#ifndef SPEL_H
#define SPEL_H

#include "includeHeaders.h"
#include "speler.h"
#include "speelveld.h"

namespace ZEESLAG
{
    class Spel
    {
        private:
            Speler speler1;
            Speelveld speelveldSpeler1;
            Speler speler2;
            Speelveld speelveldSpeler2;

        public: 
            Spel() { intro(); printSpeelveld(); outro(); }
            Spel(bool i) { uitleg(); }
            void intro();
            void uitleg();
            void outro();
            void printSpeelveld();
    };
}

#endif // SPEL_H