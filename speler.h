#ifndef SPELER_H
#define SPELER_H

#include "speelveld.h"
#include "spelerID.h"
#include "includeHeaders.h"

using namespace std;

namespace ZEESLAG
{
        class speler
        {
                private: 
                        string naam;

                public: /*
                        speler(string naam){this.naam = naam;}
                        string getnaam(){return this.naam;}
                        //speler( unsigned char instance = 0 ): instance(instance){}
                        //unsigned char getInstance( void ) const	{return instance;}*/

                protected:
                        //const unsigned char instance;
        };
}

#endif // SPELER_H