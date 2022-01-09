//Gijs Jackers - Martijn Guilliams

//g++ zeeslag.cpp spel.cpp boot.cpp speler.cpp speelveld.cpp

#include "includeHeaders.h"
#include "includeBoten.h"
#include "spel.h"
#include "speler.h"
#include "speelveld.h"
using namespace std;

using namespace ZEESLAG;
int Speler::instances = 0;

int main( int argumentCount, char * argumentVector[] )
{
    if (argumentCount == 2 && (strcmp(argumentVector[1], "--help") == 0)) //help functie
	{
        Spel SpelHelp(1);
        exit(EXIT_FAILURE);
	}

    Spel Spel1;

    return (0);
}