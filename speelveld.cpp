#include "speelveld.h"

using namespace std;

namespace ZEESLAG
{
    void Speelveld::print()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << veld[i][j];
            }
            cout << "\n";
        }
    }

    void Speelveld::getPositie(Boot& boot)
    {
        cout << "Breedte boot: " <<boot.breedte;
    }
}