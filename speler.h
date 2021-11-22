#ifndef SPELER_H
#define SPELER_H

#include <string>
#include "speelveld.h"
#include "spelerID.h"

class speler
{
	public:
        speler( unsigned char instance = 0 ): instance(instance){}
        unsigned char getInstance( void ) const	{return instance;}
	protected:
        const unsigned char instance;
};

#endif  SPELER_H
