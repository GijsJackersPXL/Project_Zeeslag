//A0 omzetten naar (0,0) 
//D5 omzetten naar (5,4)

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int main( int argumentCount, char * argumentVector[] )
{
    string stop = "";
    while (stop != "y")
    {
        cout << "Kies een coordinaat(A-J)(0-9): ";
        string coordinaat;
        getline(cin, coordinaat);

        while (coordinaat.length() != 2 || isalpha(coordinaat[0]) != 1 || isdigit(coordinaat[1]) != 1 || (64 < int(coordinaat[0]) && int(coordinaat[0]) < 75) != 1 )  //A = 65 // J=74 //ABCDEFGHIJ
        {
            cout << "Foute coordinaat\n";
            cout << "Kies een coordinaat(A-J)(0-9): ";
            getline(cin, coordinaat);
        }
        cout << "Je coordinaat is goedgekeurd" << endl;

        //coordinaat omzetten zodat deze geprint kan worden;
        char ch0 = coordinaat[0];
        char ch1 = coordinaat[1];
        int coordinaat0 = int(ch0) - 65;
        int coordinaat1 = int(ch1) - 48;

        //Grid printen
        cout <<"  A B C D E F G H I J \n";
        for (int i = 0; i <= 9; i++) // van 0-9
        {
            cout << i << " ";
            for (int j = 0; j <= 9; j++) // van A-J
            {
                if (j == coordinaat0 && i == coordinaat1)
                {
                    cout << "X" << " ";
                }
                else
                {
                    cout << "." << " ";
                }
            }
            cout << "\n";
        }

        //vragen voor te stoppen
        cout << "Stoppen? (y/n)\n";
        getline(cin, stop);
    }
    
}