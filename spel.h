#ifndef SPEL_H
#define SPEL_H

#include "includeHeaders.h"
#include "speler.h"

namespace ZEESLAG
{
    class Spel
    {
        
        public: 
            Spel() { /* intro(); */ spelersAanmaken(); /* outro(); */ }
            Spel(bool i) { uitleg(); }
            void intro();
            void uitleg();
            void outro();
            void spelersAanmaken();
    };
}

#endif // SPEL_H