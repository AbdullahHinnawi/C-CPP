

#ifndef TEH12_OMISTAJA_H
#define TEH12_OMISTAJA_H

#pragma once
#include "stdafx.h"


using namespace std;

class Omistaja {

private:
    string *ptrNimi;

public:
    Omistaja();
    ~Omistaja();
    string& palautaNimi();
    void setNimi(const string &nimi);

};


#endif //TEH12_OMISTAJA_H
