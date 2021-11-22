//Gijs Jackers
//Martijn Guilliams

#include <stdio.h>
#include <iostream>
#include <string.h>

#include "spel.h"

using namespace std;

int main( int argumentCount, char * argumentVector[] )
{
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

    spel Spel1;
    Spel1.intro(); //geeft fout
    
}