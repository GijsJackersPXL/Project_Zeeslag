#include "speelveld.h"

using namespace std;

namespace ZEESLAG
{
    void Speelveld::printSpeelveld()
    {        
        geschotenPunten[1][1] = 1;

        //Grid printen
        cout << linkerBovenHoek;
        for (int i = 0; i < 22; i++)
        {
            cout << horizontaal;
        }
        cout << rechterBovenHoek << "\n";
        
        cout << verticaal <<"  A B C D E F G H I J " << verticaal << "\n";
        for (int C = 0; C <= 9; C++) // van 0-9
        {
            cout << verticaal << C << " ";
            for (int L = 0; L <= 9; L++) // van A-J
            {
                if (geschotenPunten[C][L] == 1)
                {
                    cout << "X" << " ";
                }else
                {
                    cout << "." << " ";
                }
            }
            cout << verticaal << "\n";
        }
        cout << linkerOnderHoek;
        for (int i = 0; i < 22; i++)
        {
            cout << horizontaal;
        }
        cout << rechterOnderHoek << "\n";
    }
}