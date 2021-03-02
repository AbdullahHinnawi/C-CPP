

#ifndef TEH6_B_LEIMAUSTAPAHTUMA_H
#define TEH6_B_LEIMAUSTAPAHTUMA_H


#pragma once
#include "stdafx.h"


using namespace std;

class Leimaustapahtuma {

private:

    string leimaajanNimi;
    string leimausAika;


public:
    Leimaustapahtuma(string &nimi,string &aika);
    ~Leimaustapahtuma();
    void tulosta();
    string palautaString();


};


#endif //TEH6_B_LEIMAUSTAPAHTUMA_H
