

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
    // unique pointer
    std::unique_ptr<string> ptrOmistaja;
    // shared pointer
    std::shared_ptr<float> ptrSaldo;


    /*
     * TAI
     *  std::unique_ptr<string> ptrOmistaja = std::make_unique<string>();
     *  std::shared_ptr<float> ptrSaldo = std::make_shared<float>();
     *
     */

public:
    Matkakortti(); // konstruktori deklarointi
    ~Matkakortti(); // destruktori deklarointi
    void alusta(string &omistaja);
    void lataa(float &omistaja);
    void matkusta(Matkatyyppi tyyppi);
    void tulostaTiedot(); // pulma sovelluskerros (Matkakortti) tulee riippuvaiseksi kl:st?
    string& palautaNimi();
    float palautaSaldo();

};



#endif //MATKAJARJESTELMA_MATKAKORTTI_H
