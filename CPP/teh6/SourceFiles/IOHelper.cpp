
#include "../HeaderFiles/stdafx.h"

/*
	http://www.cplusplus.com/articles/S3wTURfi/

	put these lines to stdafx.h:
	#include <string> // for IOHelper
	#include <sstream>
	#include <iostream>

	read strings like this:
	string rivi;
	getline(cin, rivi);
*/




using namespace std;

// loops until user inputs integer
int getIntFromStream()
{
    string input = "";
    int value = 0;

    while (true) {
        getline(cin, input);

        // This code converts from string to number safely.
        stringstream myStream(input);
        if (myStream >> value)
            break;
        cout << "\t\t\t\t";
        cout << "Ei numeerinen, syota uusi." << endl;
    }
    return value;
}

// loops until user inputs float
float getFloatFromStream()
{
    string input = "";
    float value = 0;

    while (true) {
        getline(cin, input);

        // This code converts from string to number safely.
        stringstream myStream(input);
        if (myStream >> value)
            break;
        cout << "\t\t\t\t";
        cout << "Ei liukuluku, syota uusi." << endl;
    }
    return value;
}


