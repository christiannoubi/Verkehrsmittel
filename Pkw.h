#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include "Radfahrzeuge.h"
using namespace std;

class Pkw : public Radfahrzeuge{

private:

    int anzahlTueren;

public:
    Pkw () {

    }
    Pkw (int anzahlTueren) {
        this->anzahlTueren = anzahlTueren;
    }
};