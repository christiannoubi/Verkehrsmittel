#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include "Verkehrsmittel.h"
using namespace std;

class Luftfahrzeuge : public Verkehrsmittel {

private:
    double maxHoehe;
public:
    Luftfahrzeuge () {

    }
    Luftfahrzeuge (string name, double maxhoehe, Position position): Verkehrsmittel(name, position) {
        this->maxHoehe = maxhoehe;
    }

    string text () {
        stringstream s;
        s << "Name: "<<  this->getName() <<", Maxhoehe: " <<maxHoehe;
        return s.str();
    }
};