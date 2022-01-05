#include "speler.h"

using namespace std;

namespace ZEESLAG
{
    void Speler::vraagNaam()
    {
        cout << "De naam van speler" << getInstance() << ": ";
        string naamSpeler;
        cin >> naamSpeler;
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

    int Speler::getInstance()
    { 
        return this->instances; 
    }

    void Speler::printSpeelveld(Speelveld& speelveld) 
    {
        speelveld.printSpeelveld();
    }
}