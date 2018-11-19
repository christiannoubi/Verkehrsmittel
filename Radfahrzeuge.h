#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include "Verkehrsmittel.h"
using namespace std;

class Radfahrzeuge : public Verkehrsmittel {

private:
    int anzahlRaeder;
public:
    int getAnzahlRaeder() const {
        return anzahlRaeder;
    }

    void setAnzahlRaeder(int anzahlRaeder) {
        Radfahrzeuge::anzahlRaeder = anzahlRaeder;
    }

    Radfahrzeuge(int anzahlRaeder) : anzahlRaeder(anzahlRaeder) {}
    Radfahrzeuge() {

    }
};