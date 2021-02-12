

#include "Matkakortti.h"


using namespace std;

Matkakortti::Matkakortti()
{

    // Varaa jasenmuuttujille tila kasasta
    ptrOmistaja = ::new string;
    ptrSaldo = ::new float;

}
Matkakortti::~Matkakortti()
{
    // Vapauta jasenmuuttujien varatun tilan oliota havitettaessa
    delete ptrOmistaja;
    delete ptrSaldo;
    cout << "Oliota poistetaan!" << endl;
}

void Matkakortti::alusta(string& omistaja)
{
    *ptrOmistaja = omistaja;
    *ptrSaldo = 0;
}
void Matkakortti::lataa(float& raha)
{

    *ptrSaldo = *ptrSaldo + raha;

}

void Matkakortti::matkusta(Matkatyyppi tyyppi)
{
    if(tyyppi==HELSINKI && *ptrSaldo >= HELSINKIHINTA){
        cout << "\n\n\t\t\t\tHyvaa matkaa!\n";
        *ptrSaldo = *ptrSaldo - HELSINKIHINTA;

    }else if(tyyppi==SEUTU && *ptrSaldo >= SEUTUHINTA){
        cout << "\n\n\t\t\t\tHyvaa matkaa!\n";
        *ptrSaldo = *ptrSaldo - SEUTUHINTA;

    }else {
        cout << "\n\t\t\t\tRahasi eivat riita, saldosi: " << *ptrSaldo << "\n";
    }

}

string& Matkakortti::palautaNimi()
{

    return *ptrOmistaja;
}

float Matkakortti::palautaSaldo()
{
    return *ptrSaldo;
}
void Matkakortti::tulostaTiedot()
{

    cout << "Kortin omistajan nimi: " << *ptrOmistaja  << "\t\t\t\t\t" << "saldo: " << *ptrSaldo << "\n";

}
