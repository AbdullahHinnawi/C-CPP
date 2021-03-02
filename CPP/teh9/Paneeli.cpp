

#include "Paneeli.h"

Paneeli::Paneeli() {

}

void Paneeli::setVari(const string& v) {

    vari = v;

}

string &Paneeli::getVari() {
    return vari;
}

void Paneeli::tulostaVari() {
    cout << "\t\t\t\tPaneelin valkytys vari: " << vari << "\n";
    cout << "\t\t\t\t";
}




