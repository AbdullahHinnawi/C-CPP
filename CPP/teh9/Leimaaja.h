

#ifndef TEH6_LEIMAAJA_H
#define TEH6_LEIMAAJA_H

#pragma once
#include "stdafx.h"




using namespace std;

class Matkakortti; // forward-maarittely
class Leimaustapahtuma; // forward-maarittely
class Paneeli; // forward-maarittely
class DateTime; // forward-maarittely


class Leimaaja
{
private:
    string reitinNimi;
    Leimaustapahtuma **leimaukset; // Leimaustapahtuma edellyttaa forward-maarittelya
    Paneeli *paneeli;
    DateTime *dateTime;
    int leimausLkm; // globaali leimauslaskuri


public:
    int MAX;
    Leimaaja();
    ~Leimaaja();
    Leimaaja(const string &reitinNimi);
    void muutaLeimausLkm(int lkm);
    bool leimaa(Matkakortti& kortti, Matkatyyppi tyyppi); // Matkakortti edellyttää forward-maarittely
    void tulostaTiedot();
};
;


#endif //TEH6_LEIMAAJA_H
