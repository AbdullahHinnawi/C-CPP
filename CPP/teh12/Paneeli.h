

#ifndef TEH9_PANEELI_H
#define TEH9_PANEELI_H

#pragma once
#include "stdafx.h"


using namespace std;

class Paneeli {

private:
    string vari;

public:
    Paneeli();
    void setVari(const string &v);
    string& getVari();
    void tulostaVari();
};


#endif //TEH9_PANEELI_H
