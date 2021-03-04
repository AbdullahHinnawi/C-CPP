

#include "stdafx.h"


using namespace std;


Leimaaja::Leimaaja() {

    paneeli = new Paneeli();
    dateTime = new DateTime();

    MAX = 5;
    leimausLkm = 0;

}

Leimaaja::~Leimaaja() {


    leimaukset.clear();
    delete paneeli;
    delete dateTime;

}


void Leimaaja::muutaLeimausLkm(int lkm) {


    // poistetaan vanhat leimaustapahtumat
    leimaukset.clear();

    // paivitetaan MAX-muuttuja ja nollataan leimausLkm
    MAX = lkm;
    leimausLkm = 0;

}

bool Leimaaja::leimaa(Matkakortti *kortti, Matkatyyppi tyyppi)
{


    if(kortti->matkusta(tyyppi)){

        Leimaustapahtuma *uusiLeimaus;
        string leimausAika = dateTime->getCurrentTime();
        uusiLeimaus = new Leimaustapahtuma(kortti->palautaNimi(), leimausAika);
        leimaukset.push_front(*uusiLeimaus);

        leimausLkm++;
        if(leimausLkm > MAX){
            leimaukset.pop_back();
        }

        paneeli->setVari("Vihrea");
        paneeli->tulostaVari();
        return true;

    }
    paneeli->setVari( "Punainen");
    paneeli->tulostaVari();
    return false;
}

void Leimaaja::tulostaTiedot()
{

        cout  << "Nimi"  << "\t\t\t\t\t" << "Leimausaika" << "\n";
        cout << "\t\t\t\t";

        list <Leimaustapahtuma> :: iterator itr;

        for(itr=leimaukset.begin(); itr!=leimaukset.end();itr++){
            itr->tulosta();
            cout << "\t\t\t\t";
        }

}









