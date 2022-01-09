//vb. A2 op grid kunnen laten zien
#include "includeHeaders.h"

using namespace std;

//using namespace ZEESLAG;
int main( int argumentCount, char * argumentVector[] )
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
}
