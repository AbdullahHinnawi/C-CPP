

#include "stdafx.h"

using namespace std;


Leimaaja::Leimaaja() {

    paneeli = new Paneeli();
    dateTime = new DateTime();

    MAX = 5;
    leimaukset = new Leimaustapahtuma* [MAX];
    leimausLkm = 0;
    for(int i = 0; i < MAX; i++){
        leimaukset[i] = NULL;
    }

}

Leimaaja::~Leimaaja() {

    for(int i = 0; i < MAX; i++){
        delete leimaukset[i];
    }

    delete paneeli;
    delete dateTime;

}


void Leimaaja::muutaLeimausLkm(int lkm) {

    // poistetaan vanhat leimaustapahtumat
    for(int i = 0; i < MAX; i++){
        delete leimaukset[i];
    }

    // havitetaan osoitintaulukko
    delete leimaukset;

    // paivitetaan MAX-muuttuja
    MAX = lkm;

    // luodaan uusi osoitintaulukko ja nollataan se
    leimaukset = new Leimaustapahtuma* [MAX];
    leimausLkm = 0;
    for(int i = 0; i < MAX; i++){
        leimaukset[i] = NULL;
    }

}

bool Leimaaja::leimaa(Matkakortti& kortti, Matkatyyppi tyyppi)
{
    if(kortti.matkusta(tyyppi)){
        Leimaustapahtuma *uusiLeimaus;
        string leimausAika = dateTime->getCurrentTime();
        uusiLeimaus = new Leimaustapahtuma(kortti.palautaNimi(), leimausAika);
        delete leimaukset[leimausLkm % MAX];
        leimaukset[leimausLkm % MAX] = uusiLeimaus;
        leimausLkm++;
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
    int apu;
    if(leimausLkm < MAX){
        apu = leimausLkm;
    }else{
         apu = MAX;
    }

    if(apu != 0){
        cout  << "Nimi"  << "\t\t\t\t\t" << "Leimausaika" << "\n";
        cout << "\t\t\t\t";
        for(int i = 0; i < apu ; i++){
            if(i == apu - 1){
                leimaukset[i]->tulosta();
            }else{
                leimaukset[i]->tulosta();
                cout << "\t\t\t\t";
            }

        }

    }




}









