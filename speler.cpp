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
    
    void Speler::botenAanmaken()
    {
        //Patrouilleschip Patrouille1;
        //Torpedobootjager Torpedobootjager1;
        //Slagschip Slagschip1;
        //Vliegdekschip Vliegdekschip1;
        //Duikboot Duikboot1;

        cout << "Patrouille1 breedte: " << Patrouille1.getBreedte() << endl;
        cout << "Torpedobootjager1 breedte: " << Torpedobootjager1.getBreedte() << endl;
    }

}