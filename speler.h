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
                        
                        Patrouilleschip Patrouille1;
                        Torpedobootjager Torpedobootjager1;
                        //Slagschip Slagschip1;
                        //Vliegdekschip Vliegdekschip1;
                        //Duikboot Duikboot1;
                        
                public:
                        Speler() { instances++; vraagNaam(); botenAanmaken();}
                        ~Speler() { instances--; }
                        void setNaam(string naam);
                        string getNaam();
                        void vraagNaam();
                        int getInstance();
                        void botenAanmaken();
                        
        };
}

#endif // SPELER_H