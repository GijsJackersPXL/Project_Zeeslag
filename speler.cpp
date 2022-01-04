#include "speler.h"
using namespace std;

namespace ZEESLAG
{
    void Speler::vraagNaam()
    {
        cout << "De naam van speler" << getInstance() << ": " << endl;
        string naamSpeler;
        getline(cin, naamSpeler);
        setNaam(naamSpeler);
        cout << "Hey, " << naamSpeler << endl;
    }
    
    void Speler::setNaam(string naam)
    {
        this->naam = naam;
    }
    
    string Speler::getNaam()
    {
        return naam;
    }

    unsigned char Speler::getInstance() const
    { 
        return instance; 
    }
}