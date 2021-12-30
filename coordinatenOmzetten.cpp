//Coordinaat opvragen en weergeven op grid

#include "includeHeaders.h"

using namespace std;

//using namespace ZEESLAG;
int main( int argumentCount, char * argumentVector[] )
{
    int geschotenPunten[9][9];unsigned char linkerBovenHoek = 201;
    unsigned char recheterBovenHoek = 187;
    unsigned char linkerOnderHoek = 200;
    unsigned char rechterOnderHoek = 188;
    unsigned char horizontaal= 205;
    unsigned char verticaal = 186;

    //cout << linkerBovenHoek << recheterBovenHoek << "\n";
    //cout << linkerOnderHoek << rechterOnderHoek << "\n";
    
    string stop = "";
    while (stop != "y" && stop != "Y")
    {
        //coordinaat kiezen
        cout << "Kies een coordinaat(A-J)(0-9): ";
        string coordinaat;
        getline(cin, coordinaat);

        //testen van coordinaat
        while (coordinaat.length() != 2 || isalpha(coordinaat[0]) != 1 || isdigit(coordinaat[1]) != 1 || (64 < int(coordinaat[0]) && int(coordinaat[0]) < 75) != 1 )  //A = 65 // J=74 //ABCDEFGHIJ
        {
            cout << "Foute coordinaat\n";
            cout << "Kies een coordinaat(A-J)(0-9): ";
            getline(cin, coordinaat);
        }
        cout << "Je coordinaat is goedgekeurd" << endl;

        //coordinaat omzetten zodat deze geprint kan worden;
        char ch0 = coordinaat[0];
        cout << "char: " << ch0;
        char ch1 = coordinaat[1];
        cout << ch1 << "\n";
        int coordinaatCijfer = int(ch0) - 65;
        cout << "Coordinaat: " << coordinaatCijfer;
        int coordinaatLetter = int(ch1) - 48;
        cout << coordinaatLetter << "\n";
        
        geschotenPunten[coordinaatLetter][coordinaatCijfer] = 1;

        //Grid printen
        cout << linkerBovenHoek;
        for (int i = 0; i < 22; i++)
        {
            cout << horizontaal;
        }
        cout << recheterBovenHoek << "\n";
        
        cout << verticaal <<"  A B C D E F G H I J " << verticaal << "\n";
        for (int C = 0; C <= 9; C++) // van 0-9
        {
            cout << verticaal << C << " ";
            for (int L = 0; L <= 9; L++) // van A-J
            {
                //if (geschotenPunten[L][C] == 1 || L == coordinaatCijfer && C == coordinaatLetter)
                if (geschotenPunten[C][L] == 1)
                {
                    cout << "X" << " ";
                }else
                {
                    cout << "." << " ";
                }
                
                /*if (j == coordinaatCijfer && i == coordinaatLetter)
                {
                    cout << "X" << " ";
                }
                else
                {
                    cout << "." << " ";
                }*/
            }
            cout << verticaal << "\n";
        }
        cout << linkerOnderHoek;
        for (int i = 0; i < 22; i++)
        {
            cout << horizontaal;
        }
        cout << rechterOnderHoek << "\n";

        //vragen voor te stoppen
        cout << "Stoppen? (y/n)\n";
        getline(cin, stop);
    }
    
}
