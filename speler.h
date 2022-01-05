#ifndef SPELER_H
#define SPELER_H

#include "speelveld.h"
#include "includeBoten.h"
#include "includeHeaders.h"

using namespace std;

//class Patrouilleschip;
namespace ZEESLAG
{
        class Speler
        {
                private:
                        string naam;
                        int punten;
                        static int instances;

                public:
                        Speler() { instances++; vraagNaam(); }
                        ~Speler() { instances--; }
                        void setNaam(string naam);
                        string getNaam();
                        void vraagNaam();
                        int getInstance();
                        void botenAanmaken();
                        //Patrouilleschip Patrouille1;
        };
}

#endif // SPELER_H