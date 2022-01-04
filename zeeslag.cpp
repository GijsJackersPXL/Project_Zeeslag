//Gijs Jackers
//Martijn Guilliams

//g++ zeeslag.cpp spel.cpp boot.cpp speler.cpp

#include "includeHeaders.h"
#include "spel.h"
#include "speler.h"
#include "boot.h"
#include "patrouilleschip.h"
#include "duikboot.h"
#include "torpedobootjager.h"
#include "slagschip.h"
#include "vliegdekschip.h"

using namespace std;

using namespace ZEESLAG;
int main( int argumentCount, char * argumentVector[] )
{
    Spel Spel1;

    if (argumentCount == 2 && (strcmp(argumentVector[1], "--help") == 0)) //help functie
	{
		//cout << "Uitleg spel.cpp\n";
		Spel1.uitleg();
        exit(EXIT_FAILURE);
	}
    
    //Spel1.intro(); 
    
    Speler Speler1;

    Speler1.vraagNaam();

    cout << "getNaam: " << Speler1.getNaam() << endl;
    
    cout << "getInstance: " << Speler1.getInstance() << endl;
    

    /*
    //-----VRAGEN VAN NAMEN----//
    printf("\n\n----VRAGEN VAN NAMEN---- \n\n");

    cout << "De naam van speler1: " << endl;
    cout << "You: ";
    string naamSpeler1;
    getline(cin, naamSpeler1);
    cout << "Hey, " << naamSpeler1 << "! Wil je zeeslag starten?\n";

    //cerr << "Wilt u zeeslag starten?" << endl;
    if( getchar() != 'y' )
    {
        cout << "Stop spel" << endl;
        return( 0 );
    }
    cout << "Einde programma" << endl;
    
    cout << "\n";
    */
    
    
    /*
    Patrouilleschip Patrouille1;
    Patrouille1.setX(1); //positie met setter aanpassen
    Patrouille1.setY(2); //positie met setter aanpassen
    cout << "\n\nPatrouille1 breedte: " << Patrouille1.getBreedte() << endl;
    cout << "Patrouille1 coordinaat x: " << Patrouille1.getX() << endl;
    cout << "Patrouille1 coordinaat y: " << Patrouille1.getY() << endl;

    Patrouilleschip Patrouille2(3,4); //positie met constructor meegeven
    cout << "Patrouille2 breedte: " << Patrouille2.getBreedte() << endl;
    cout << "Patrouille2 coordinaat x: " << Patrouille2.getX() << endl;
    cout << "Patrouille2 coordinaat y: " << Patrouille2.getY() << endl;

    Patrouille2.setPositie(4,5); //posietie aanpassen met setter
    cout << "Patrouille2 coordinaat x: " << Patrouille2.getX() << endl;
    cout << "Patrouille2 coordinaat y: " << Patrouille2.getY() << endl;
    */
    return (0);
}
