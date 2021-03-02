

#include "stdafx.h"

using namespace std;

Matkakortti::Matkakortti()
{

    // Varaa jasenmuuttujille tila kasasta
    ptrSaldo = ::new float;

}
Matkakortti::~Matkakortti()
{
    // Vapauta jasenmuuttujien varatun tilan oliota havitettaessa
    delete ptrSaldo;
    cout << "Oliota poistetaan!" << endl;
}

void Matkakortti::alusta(string& omistaja)
{
    HenkiloKortti::setNimi(omistaja);
    *ptrSaldo = 0;
}
void Matkakortti::lataa(float& raha)
{

    *ptrSaldo = *ptrSaldo + raha;

}

bool Matkakortti::matkusta(Matkatyyppi tyyppi)
{
    if(tyyppi==HELSINKI && *ptrSaldo >= HELSINKIHINTA){
        *ptrSaldo = *ptrSaldo - HELSINKIHINTA;
        cout << "\n\t\t\t\tHyvaa matkaa!\n";
        return true;

    }else if(tyyppi==SEUTU && *ptrSaldo >= SEUTUHINTA){
        *ptrSaldo = *ptrSaldo - SEUTUHINTA;
        cout << "\n\t\t\t\tHyvaa matkaa!\n";
        return true;

    }else {
        cout << "\n\t\t\t\tRahasi eivat riita, saldosi: " << palautaSaldo() << " € \n";
        return false;
    }
}

string& Matkakortti::palautaNimi()
{

   return HenkiloKortti::palautaNimi();
}

float Matkakortti::palautaSaldo()
{
    return *ptrSaldo;
}
void Matkakortti::tulostaTiedot()
{

    cout << "Kortin omistajan nimi: " << HenkiloKortti::palautaNimi()  << "\t\t\t\t\t" << "saldo: " << *ptrSaldo << "\n";

}