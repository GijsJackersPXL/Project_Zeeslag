#include "spel.h"
using namespace std;

namespace ZEESLAG
{
    void Spel::intro()
    {
        cout << "  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.    \n";
        cout << " | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |   \n";
        cout << " | |   ________   | || |  _________   | || |  _________   | || |    _______   | || |   _____      | || |      __      | || |    ______    | |   \n";
        cout << " | |  |  __   _|  | || | |_   ___  |  | || | |_   ___  |  | || |   /  ___  |  | || |  |_   _|     | || |     /  \\     | || |  .' ___  |   | |   \n";
        cout << " | |  |_/  / /    | || |   | |_  \\_|  | || |   | |_  \\_|  | || |  |  (__ \\_|  | || |    | |       | || |    / /\\ \\    | || | / .'   \\_|   | |   \n";
        cout << " | |     .'.' _   | || |   |  _|  _   | || |   |  _|  _   | || |   '.___`-.   | || |    | |   _   | || |   / ____ \\   | || | | |    ____  | |   \n";
        cout << " | |   _/ /__/ |  | || |  _| |___/ |  | || |  _| |___/ |  | || |  |`\\____) |  | || |   _| |__/ |  | || | _/ /    \\ \\_ | || | \\ `.___]  _| | |   \n";
        cout << " | |  |________|  | || | |_________|  | || | |_________|  | || |  |_______.'  | || |  |________|  | || ||____|  |____|| || |  `._____.'   | |   \n";
        cout << " | |              | || |              | || |              | || |              | || |              | || |              | || |              | |   \n";
        cout << " | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |   \n";
        cout << "  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'    \n";

        cout << "DOEL VAN HET SPEL: \n";
        cout << "Doel is dat beide spelers zo door gericht te raden proberen als eerste de volledige locaties van alle schepen van de tegenstander te raden en zo \n";
        cout << "de vloot van de tegenstander 'tot zinken' te brengen. Wanneer alle co??rdinaten van een schip zijn geraakt, is het schip gezonken.\n\n";
    }

    void Spel::uitleg()
    {
        cout << "HOE PLAATS JE EN BOOT \n";
        cout << "Eerst gaat er gevraagd worden om je booten te plaatsen. De regels voor boten te plaatsen is dat de boten elkaar nooit mogen raken. \n";
        cout << "Er gaat gevraagd worden voor de coordinaten van de 1ste boot. Hier geef je eerst een letter(A-J) daarna een cijfer(0-9) als je dat hebt ingegeven duw je op enter  \n";
        cout << "Als de coordinaat goedgekeurd is zal er gevraagd worden of de boot horizontaal(h) of vertikaal(v) komt te staan, maak je keuze \n";
        cout << "Je zal een goedkeuring krijgen als je boot gezet maar je kan ook een error krijgen als je boot verkeerd staat.\n\n";
    }

    void Spel::outro()
    {
        // speler1 en speler2 in array zetten voor kortere code
        // speler[variabele].aantalschoten

        // if (speler1.gewonnen == 1)
        // {
        //     cout << "De winnaar is" << speler1.getNaam() "\n";
        //     cout << "U heeft zo vaak geschoten: \n"; // aantal schoten
        //     cout << "Aantal hits en misses: \n"; 
        // }
        // else
        // {
        //     cout << "De winnaar is" << speler2.getNaam() "\n";
        //     cout << "U heeft zo vaak geschoten: \n"; // aantal schoten
        //     cout << "Aantal hits en misses: \n"; 
        // }
        cout << "Outro\n"; 
    }

    void Spel::printSpeelveld()
    {
        speler1.printSpeelveld(speelveldSpeler1);
    }
}