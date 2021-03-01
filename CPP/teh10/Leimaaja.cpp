

#include "stdafx.h"


using namespace std;

DateTime dateTime;


Leimaaja::Leimaaja() {


}

bool Leimaaja::leimaa(Matkakortti kortti, Matkatyyppi tyyppi)
{
    // kutsu matkakortin matkusta-operaatiota
    // jos saldo on riittava
    //      kopioi matkakortin omistaja leimaajalle
    //      generoi aikaleima ja talleta se leimaajalle
    //      palauta true;
    // muuten
    //      palauta false;
    if(kortti.matkusta(tyyppi)){
        viimeisinLeimaaja = kortti.palautaNimi();
        viimeisinAikaleima = dateTime.getCurrentTime();
        return true;
    }
    return false;
}

void Leimaaja::tulostaLeimaaja()
{
    cout << "Nimi \t\t\t\t\t\t Leimausaika\n";
    cout << "\t\t\t\t";
    cout << viimeisinLeimaaja << " \t\t\t\t\t\t " << viimeisinAikaleima << endl;

}




