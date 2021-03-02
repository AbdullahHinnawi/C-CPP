
#include "stdafx.h"

using namespace std;




using namespace std;

Leimaustapahtuma::Leimaustapahtuma(string &nimi,string &aika){
    leimaajanNimi = nimi;
    leimausAika = aika;
}

Leimaustapahtuma::~Leimaustapahtuma() {

}

void Leimaustapahtuma::tulosta() {

    cout  << leimaajanNimi  << "\t\t\t\t\t" << leimausAika << "\n";


}













