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
    Luftfahrzeuge (double maxhoehe) {
        this->maxHoehe = maxhoehe;
    }
    double getMaxHoehe() const {
        return maxHoehe;
    }

    void setMaxHoehe(double maxHoehe) {
        Luftfahrzeuge::maxHoehe = maxHoehe;
    }

};