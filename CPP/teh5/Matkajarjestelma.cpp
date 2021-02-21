
// Matkajarjestelma.cpp : Defines the entry point for the console application.


#include "stdafx.h"


using namespace std;

int main()
{
    int v;
    string rivi;
    float raha;
    // Construct a shared pointer using make_shared
    std::shared_ptr<Matkakortti> kortti = std::make_shared<Matkakortti>();
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
        cout << "\t\t\t\tLopeta 6.\n";

        cout << "\n\t\t\t\t";
        v=getIntFromStream();
        switch (v)
        {
            case 1:
                cout << "\t\t\t\tAnna kortin omistajan nimi: \n";
                cout << "\t\t\t\t";
                getline(cin, rivi);
                kortti->alusta(rivi);
                break;
            case 2:
                cout << "\t\t\t\tAnna lisattava saldo: \n";
                cout << "\t\t\t\t";
                raha = getFloatFromStream();
                kortti->lataa(raha);
                break;
            case 3:
                cout << "\t\t\t\t";
                kortti->matkusta(HELSINKI);
                break;
            case 4:
                cout << "\t\t\t\t";
                kortti->matkusta(SEUTU);
                break;
            case 5:
                cout << "\t\t\t\t";
                kortti->tulostaTiedot();
                break;
            case 6:
                //cin.get();
                break;
        }
    }
    while (v!=6);
    return 0;
}




