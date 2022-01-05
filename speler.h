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
                        Boot* ent[5];
                        

                public:
                        Speler() 
                        { 
                                instances++; 
                                vraagNaam(); 
                                ent[0] = new Patrouilleschip(); 
                                ent[1] = new Torpedobootjager();
                                ent[2] = new Slagschip();
                                ent[3] = new Vliegdekschip();
                                ent[4] = new Duikboot();
                                //cout << "Breedte: " << ent[0]->getBreedte() << end1;   
                        }

                        ~Speler() { instances--; }
                        void setNaam(string naam);
                        string getNaam();
                        void vraagNaam();
                        int getInstance();
                        void printSpeelveld(Speelveld& speelveld);
                        
        };
}

#endif // SPELER_H