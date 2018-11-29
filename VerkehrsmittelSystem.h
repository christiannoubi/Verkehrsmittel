#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "Pkw.h"
#include "Radfahrzeuge.h"
#include "Luftfahrzeuge.h"

using namespace std;

class VerkehrsmittelSystem {

public:
    vector <Verkehrsmittel*> verkehr;


    void fuegehinzu(Verkehrsmittel &v) {
        verkehr.push_back(&v);
    }

};