//Gijs Jackers
//Martijn Guilliams

//g++ zeeslag.cpp spel.cpp 

#include <stdio.h>
#include <iostream>
#include <string.h>

#include "spel.h"
#include "boot.h"
#include "patrouilleschip.h"
#include "duikboot.h"
#include "torpedobootjager.h"
#include "slagschip.h"
#include "vliegdekschip.h"

using namespace std;

int main( int argumentCount, char * argumentVector[] )
{
    /*//-----VRAGEN VAN NAMEN----//
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
    */
    
    Spel Spel1;
    Spel1.intro(); 

    

    Patrouilleschip Patrouille;
    Patrouille.setX(1);
    Patrouille.setY(2);
    cout << "\n\n\n Boot breedte: " << Patrouille.getBreedte() << endl;
    
    Duikboot Duikboot1;
    cout << "\n\n\n Boot breedte: " << Duikboot1.getBreedte() << endl;

    Torpedobootjager Torpedobootjager1;
    cout << "\n\n\n Boot breedte: " << Torpedobootjager1.getBreedte() << endl;

    Slagschip Slagschip1;
    cout << "\n\n\n Boot breedte: " << Slagschip1.getBreedte() << endl;

    Vliegdekschip Vliegdekschip1;
    cout << "\n\n\n Boot breedte: " << Vliegdekschip1.getBreedte() << endl;



    
    
    return (0);
}