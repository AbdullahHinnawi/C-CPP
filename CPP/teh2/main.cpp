


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define MAX 10

typedef struct kokoelma {
    char nimi[41];
    char tekija[31];
    int jvuosi;
} aanite;

aanite levy, *levyOsoitin, levyt[MAX];



// palauttaa true jos s on numero muuten false
bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i]) == false) {
            return false;
        }
    }

    return true;
}


int kysyTiedot() {
    /* pyyt„„ „„nitteiden tiedot k„ytt„j„lt„. palauttaa arvonaan sy”tettyjen lukum„„r„n*/
    char rivi[81];
    int i;
    //levyOsoitin=&levy; // asetetaan osoitin osoitamaan levy-muuttujaa
    cout << "kirjoita aanilevykokoelmasi tiedot. Lopetus: \"teoksen nimi\"-kentassa = *\n";
    i=0;

    do
    {
        cout << "\nteoksen nimi? (40 merkkia) ";
        levyOsoitin=&levyt[i];
        cin >> levyOsoitin->nimi;
  

        if (levyOsoitin->nimi[0] != '*')
        {
            std::cout << "\ntekija? (30 merkkia) ";
            std::cin >> levyOsoitin->tekija;
            std::cout << "\njulkaisuvuosi? ";
            std::cin >> rivi;

            // Use stringstream class to convert strings of digits into ints, floats or doubles.
            stringstream convert(rivi);
            //stream rivi to the integer jvuosi
            convert >> levyOsoitin->jvuosi;




            while (!isNumber(rivi))

            {
                cout << "\nantamasi tieto ei ollut numeerinen. Kirjoita uusi";
                std::cin >> rivi;
                stringstream convert(rivi);
                //stream rivi to the integer jvuosi
                convert >> levyOsoitin->jvuosi;

            }


            i++;
        }
    }
    while ((levyOsoitin->nimi[0] != '*') && (i<MAX));
    return(i);
}

void tulostaTiedot(int lkm) {
    /* tulostetaan levyt */
    int i=0;
    system("clear");
    if (lkm==0) {

        cout << "Et syottanyt yhtakaan levya\n";
    }else
        cout << "Levyn nimi" << "\t\t\t\t" << "Tekija" << "\t\t\t\t" << "Vuosi\n";
        for (i=0;i<lkm;i++)
        {
            cout << levyt[i].nimi << "\t\t\t\t\t" << levyt[i].tekija << "\t\t\t\t" << levyt[i].jvuosi << "\n";
        }
    std::cout << "\n"; // rivinvaihto

}

int main() {
    tulostaTiedot(kysyTiedot());
    return 0;
}


