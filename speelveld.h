#ifndef SPEELVELD_H
#define SPEELVELD_H

#include "includeHeaders.h"
#include "includeBoten.h"

namespace ZEESLAG
{
    class Speelveld
    {
        private:
            bool geschotenPunten[10][10] {};
            bool eigenBoten[10][10] {};
            unsigned char linkerBovenHoek = 201;
            unsigned char rechterBovenHoek = 187;
            unsigned char linkerOnderHoek = 200;
            unsigned char rechterOnderHoek = 188;
            unsigned char horizontaal= 205;
            unsigned char verticaal = 186;
        
        public:
            void printSpeelveld();
        
    };
}
#endif  // SPEELVELD_H