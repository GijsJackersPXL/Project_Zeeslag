//Gijs Jackers
//Martijn Guilliams

//g++ zeeslag.cpp spel.cpp boot.cpp speler.cpp

#include "includeHeaders.h"
#include "includeBoten.h"
#include "spel.h"
#include "speler.h"


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
    
    //waar wil je de boot?
    // coordinaatx, coordinaaty
    // constructorVanBoot(coordinaatx,coordinaaty)

    
    
    /*
    Patrouilleschip Patrouille1; //default constructor
    Patrouilleschip Patrouille2(3,4); //specific constructor 

    Patrouilleschip *ptrPatrouilleschip; // Declare pointer to a class.

    ptrPatrouilleschip = &Patrouille1; // Sla het adres van het eerste object op
    ptrPatrouilleschip->setX(11); //positie met setter aanpassen
    ptrPatrouilleschip->setY(12); //positie met setter aanpassen
    cout << "Patrouille1 breedte: " << ptrPatrouilleschip->getBreedte() << endl;
    cout << "Patrouille1 coordinaat x: " << ptrPatrouilleschip->getX() << endl;
    cout << "Patrouille1 coordinaat y: " << ptrPatrouilleschip->getY() << endl;

    ptrPatrouilleschip = &Patrouille2; // Sla het adres van het tweede object op
    cout << "Patrouille2 breedte: " << ptrPatrouilleschip->getBreedte() << endl;
    cout << "Patrouille2 coordinaat x: " << ptrPatrouilleschip->getX() << endl;
    cout << "Patrouille2 coordinaat y: " << ptrPatrouilleschip->getY() << endl;
    */

    //Patrouille1
    // cout << "MAIN";
    // cout << "Patrouille1 breedte: " << Patrouille1.getBreedte() << endl;
    // cout << "Patrouille1 coordinaat x: " << Patrouille1.getX() << endl;
    // cout << "Patrouille1 coordinaat y: " << Patrouille1.getY() << endl;

    return (0);
}

/*
    cout << "Hey, " << naamSpeler1 << "! Wil je zeeslag starten?\n";
    //cerr << "Wilt u zeeslag starten?" << endl;
    if( getchar() != 'y' )
    {
        cout << "Stop spel" << endl;
        return( 0 );
    }
    cout << "Einde programma" << endl;
*/