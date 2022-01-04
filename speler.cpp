#include "speler.h"
using namespace std;

namespace ZEESLAG
{
    void Speler::vraagNaam()
    {
        cout << "De naam van speler";
        //printID();
        cout << getInstance() << ": " << endl;
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

    int Speler::getInstance()
    { 
        return this->instances; 
    }

}