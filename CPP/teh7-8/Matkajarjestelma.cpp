
// Matkajarjestelma.cpp : Defines the entry point for the console application.


#include "stdafx.h"


using namespace std;

int main()
{
    int v;
    string rivi;
    float raha;
    int leimaustenLkm;
    Matkakortti kortti;
    Leimaaja leimaaja;
    do
    {
        system("clear");
        cout <<"-------------------Matkakortin testausvalikko--------------------";
        cout <<"\n\n";
        cout << "\t\t\t\tAlusta matkakortti 1.\n";
        cout << "\t\t\t\tLataa matkakortti 2.\n";
        cout << "\t\t\t\tMatkusta Helsingissa 3.\n";
        cout << "\t\t\t\tMatkusta seutuliikenteessa 4.\n";
        cout << "\t\t\t\tTulosta kortin tiedot 5.\n";
        cout << "\t\t\t\tTulosta leimaajan tiedot 6.\n";
        cout << "\t\t\t\tMuuta naytettavien leimausten lukumaaraa 7.\n";
        cout << "\t\t\t\tLopeta 8.\n";

        cout << "\n\t\t\t\t";
        v=getIntFromStream();
        switch (v)
        {
            case 1:
                cout << "\t\t\t\tAnna kortin omistajan nimi: \n";
                cout << "\t\t\t\t";
                getline(cin, rivi);
                kortti.alusta(rivi);
                break;
            case 2:
                cout << "\t\t\t\tAnna lisattava saldo: \n";
                cout << "\t\t\t\t";
                raha = getFloatFromStream();
                kortti.lataa(raha);
                break;
            case 3:
                cout << "\t\t\t\t";
                leimaaja<<(kortti);
                break;
            case 4:
                cout << "\t\t\t\t";
                leimaaja<<=(kortti);
                break;
            case 5:
                cout << "\t\t\t\t";
                cout << kortti;
                break;
            case 6:
                cout << "\t\t\t\t";
                cout << leimaaja;
                break;
            case 7:
                cout << "\t\t\t\tAnna halutun leimausten lukumaara: \n";
                cout << "\t\t\t\t";
                leimaustenLkm = getIntFromStream();
                leimaaja.muutaLeimausLkm(leimaustenLkm);
                break;
            case 8:
                //cin.get();
                break;
        }
    }
    while (v!=8);
    return 0;
}




