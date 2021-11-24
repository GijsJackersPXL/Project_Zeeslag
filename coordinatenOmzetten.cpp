//A0 omzetten naar (0,0) 
//D5 omzetten naar (5,4)

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int main( int argumentCount, char * argumentVector[] )
{
   /* cout << "Geef een coordinaat op " << endl;
    cout << "Kies een coordinaat(A-J)(0-9): ";
    string coordinaat;
    getline(cin, coordinaat);
    //cout << "Je hebt coordinaat: " << coordinaat << " gekozen\n";

    char ch = coordinaat[0];
    //cout << int(toupper(ch)) << "\n";

    while (coordinaat.length() != 2 || isalpha(coordinaat[0]) != 1 || isdigit(coordinaat[1]) != 1 || (64 < int(ch) && int(ch) < 75) != 1 )  //A = 65 // J=74 //ABCDEFGHIJ
    {
         cout << "Foute coordinaat\n";
        
        
         cout << "Kies een coordinaat(A-J)(0-9): ";
         getline(cin, coordinaat);
         ch = coordinaat[0];
         cout << int(toupper(ch)) << "\n";
    }*/

    cout << "Je coordinaat is goedgekeurd" << endl;

    bool geraakt = false;

    //Grid printen
    cout <<"  A B C D E F G H I J \n";
    for (int i = 0; i <= 9; i++) // van 0-9
    {
        cout << i << " ";
        for (int i = 0; i <= 9; i++) // van A-J
        {
            if (geraakt != true)
            {
                cout << "." << " ";
            }
            else
            {
                cout << "X" << " ";
            }
        }
        cout << "\n";
    }
}