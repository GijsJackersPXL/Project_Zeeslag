#ifndef SPELER_H
#define SPELER_H

#include "speelveld.h"
#include "spelerID.h"
#include "includeHeaders.h"

using namespace std;

namespace ZEESLAG
{
        class Speler
        {
                private: 
                        string naam;
                        int punten;
                public: 
                        Speler( unsigned char instance = 0 ): instance(instance){}
                        unsigned char getInstance() const;
                        void setNaam(string naam);
                        string getNaam();
                        void vraagNaam();
                protected:
                        const unsigned char instance;
        };
}

#endif // SPELER_H