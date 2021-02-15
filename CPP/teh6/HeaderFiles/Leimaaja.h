

#ifndef TEH6_LEIMAAJA_H
#define TEH6_LEIMAAJA_H

#pragma once
#include "stdafx.h"


using namespace std;

class Matkakortti; // forward-maarittely


class Leimaaja
{
private:
    string viimeisinLeimaaja;
    string viimeisinAikaleima;


public:
    Leimaaja();
    bool leimaa(Matkakortti& kortti, Matkatyyppi tyyppi);
    void tulostaLeimaaja();
};
;


#endif //TEH6_LEIMAAJA_H
