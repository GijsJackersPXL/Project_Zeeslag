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
                        static int instances;

                public:
                        Speler() { instances++; vraagNaam();}
                        ~Speler() { instances--; }
                        void setNaam(string naam);
                        string getNaam();
                        void vraagNaam();
                        int getInstance();

                protected:
        };
}

#endif // SPELER_H