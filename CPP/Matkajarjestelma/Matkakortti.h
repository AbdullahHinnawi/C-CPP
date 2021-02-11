

#ifndef MATKAJARJESTELMA_MATKAKORTTI_H
#define MATKAJARJESTELMA_MATKAKORTTI_H


#pragma once
#include "stdafx.h"
const float HELSINKIHINTA = 4.0; //#define HELSINKIHINTA (float)4.0
const float SEUTUHINTA = 5.5;
enum Matkatyyppi {HELSINKI, SEUTU}; // lueteltu tyyppi
using namespace std;

class Matkakortti
{
private:
    string kortinOmistaja;
    float saldo;

public:
    Matkakortti();
    void alusta(string &omistaja);
    void lataa(float &omistaja);
    void matkusta(Matkatyyppi tyyppi);
    void tulostaTiedot(); // pulma sovelluskerros (Matkakortti) tulee riippuvaiseksi kl:st?
    string& palautaNimi();
    float palautaSaldo();
};



#endif //MATKAJARJESTELMA_MATKAKORTTI_H
