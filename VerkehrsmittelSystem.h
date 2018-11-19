#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "Verkehrsmittel.h"
#include "Pkw.h"
#include "Radfahrzeuge.h"
#include "Luftfahrzeuge.h"

using namespace std;

class VerkehrsmittelSystem {

public:
    vector <Pkw> pkw;
    vector <Luftfahrzeuge> luftfahrzeuge;
    vector <Radfahrzeuge> radfahrzeuge;

    void fuegehinzu(Radfahrzeuge rad) {
        radfahrzeuge.push_back(rad);
    }
    void fuegehinzu(Luftfahrzeuge luft) {
        luftfahrzeuge.push_back(luft);
    }
    void fuegehinzu(Pkw p) {
        pkw.push_back(p);
    }

    const vector<Radfahrzeuge> Radfahrzeuge() const {
        return radfahrzeuge;
    }
    const vector<Luftfahrzeuge> Luftfahrzeuge() const {
        return luftfahrzeuge;
    }
    const vector<Pkw> pkws() const {
        return pkw;
    }
};