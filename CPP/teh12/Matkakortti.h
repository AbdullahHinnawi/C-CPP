

#ifndef MATKAJARJESTELMA_MATKAKORTTI_H
#define MATKAJARJESTELMA_MATKAKORTTI_H


#pragma once
#include "stdafx.h"



using namespace std;



class Matkakortti : public HenkiloKortti, public Lompakko {

private:

    float *ptrSaldo; // pointeri muuttuja

    /* TAI heti voi varata pointereille tilaa kasasta kayttaen (new):
     *  string *ptrOmistaja = new string;
     *  float *ptrSaldo = new float;
     *
     *  ptrSaldon arvo on esim 0xbfc601ac (muistin osoite)
     *  *ptrSaldon arvo on esim 0.0
     */

public:
     Matkakortti(); // konstruktori deklarointi
    ~Matkakortti();   // destruktori deklarointi
    void alusta(string &omistaja);
    void lataa(float &omistaja);
    bool matkusta(Matkatyyppi tyyppi);
    void tulostaTiedot(); // pulma sovelluskerros (Matkakortti) tulee riippuvaiseksi kl:st?
    string& palautaNimi();
    float palautaSaldo();

};



#endif