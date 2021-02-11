

#include "Matkakortti.h"


using namespace std;



Matkakortti::Matkakortti()
{


}

void Matkakortti::alusta(string& omistaja)
{

    kortinOmistaja = omistaja;
    saldo = 0.0;

}
void Matkakortti::lataa(float& raha)
{

    saldo = saldo + raha;

}

void Matkakortti::matkusta(Matkatyyppi tyyppi)
{
    if(tyyppi==HELSINKI && saldo >= HELSINKIHINTA){
        cout << "\n\n\t\t\t\tHyvaa matkaa!\n";
        saldo = saldo - HELSINKIHINTA;

    }else if(tyyppi==SEUTU && saldo >= SEUTUHINTA){
        cout << "\n\n\t\t\t\tHyvaa matkaa!\n";
        saldo = saldo - SEUTUHINTA;

    }else {
        cout << "\n\t\t\t\tRahasi eivat riita, saldosi: " << saldo << "\n";
    }

}

string& Matkakortti::palautaNimi()
{

    return kortinOmistaja;
}

float Matkakortti::palautaSaldo()
{
    return saldo;
}
void Matkakortti::tulostaTiedot()
{

    cout << "Kortin omistajan nimi: " << kortinOmistaja  << "\t\t\t\t\t" << "saldo: " << saldo << "\n";

}
