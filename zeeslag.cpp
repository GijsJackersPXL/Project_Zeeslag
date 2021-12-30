//Gijs Jackers
//Martijn Guilliams

//g++ zeeslag.cpp spel.cpp boot.cpp 

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#include "spel.h"
#include "boot.h"
#include "patrouilleschip.h"
#include "duikboot.h"
#include "torpedobootjager.h"
#include "slagschip.h"
#include "vliegdekschip.h"


using namespace ZEESLAG;
int main( int argumentCount, char * argumentVector[] )
{
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
    */
    cout << "\n";

    Spel Spel1;
    Spel1.intro(); 

    /*Patrouilleschip Patrouille1;
    Patrouille1.setX(1);
    Patrouille1.setY(2);
    cout << "\n\nPatrouille1 breedte: " << Patrouille1.getBreedte() << endl;
    cout << "Patrouille1 coordinaat x: " << Patrouille1.getX() << endl;
    cout << "Patrouille1 coordinaat y: " << Patrouille1.getY() << endl;
    */

    Patrouilleschip Patrouille2(3,4);
    cout << "\nPatrouille2 breedte: " << Patrouille2.getBreedte() << endl;
    cout << "Patrouille2 coordinaat x: " << Patrouille2.getX() << endl;
    cout << "Patrouille2 coordinaat y: " << Patrouille2.getY() << endl;

    Patrouille2.setPositie(4,5);
    cout << "Patrouille2 coordinaat x: " << Patrouille2.getX() << endl;
    cout << "Patrouille2 coordinaat y: " << Patrouille2.getY() << endl;

    
    Duikboot Duikboot1(1,2);
    cout << "Duikboot1 breedte: " << Duikboot1.getBreedte() << endl;

    Torpedobootjager Torpedobootjager1(1,2);
    cout << "Torpedobootjager1 breedte: " << Torpedobootjager1.getBreedte() << endl;
    
    
    //Slagschip Slagschip1;
    //cout << "\nSlagschip1 breedte: " << Slagschip1.getBreedte() << endl;
    
    Slagschip Slagschip2(5,6);
    cout << "Slagschip2 breedte: " << Slagschip2.getBreedte() << endl;
    cout << "Slagschip2 coordinaat x: " << Slagschip2.getX() << endl;
    cout << "Slagschip2 coordinaat y: " << Slagschip2.getY() << endl;

    Vliegdekschip Vliegdekschip1;
    cout << "Vliegdekschip1 breedte: " << Vliegdekschip1.getBreedte() << endl;

    return (0);
}
