

#include "stdafx.h"

using namespace std;

Omistaja::Omistaja() {
    ptrNimi = new string;

}

Omistaja::~Omistaja() {

    delete ptrNimi;
}

string &Omistaja::palautaNimi() {
    return *ptrNimi;
}

void Omistaja::setNimi(const string &nimi) {
   *ptrNimi = nimi;
}