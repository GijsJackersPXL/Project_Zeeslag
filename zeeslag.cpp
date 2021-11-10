//Gijs Jackers
//Martijn Guilliams

#include <stdio.h>
#include <iostream>
#include <strings.h>

using namespace std;

int main( int argumentCount, char * argumentVector[] )
{
    //-----VRAGEN VAN NAMEN----//
    printf("\n\n----VRAGEN VAN NAMEN---- \n\n"); 
    printf("De naam van speler1 (MAX. 20 characters): ");
    //gets(naamSpeler1);

    cerr << "Wilt u zeeslag starten?" << endl;
    if( getchar() != 'y' )
    {
        return( 0 );
    }
}