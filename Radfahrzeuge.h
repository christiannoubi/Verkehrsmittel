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

    Radfahrzeuge(string name, int anzahlRaeder, Position position) : Verkehrsmittel(name, position) {
        this->anzahlRaeder = anzahlRaeder;
    }
    Radfahrzeuge() {

    }

    int getAnzahlRaeder() const {
        return anzahlRaeder;
    }

    string text () {
        stringstream s;
        s << "Name: "<<  this->getName() <<", Anzahlraeder: " <<anzahlRaeder  ;
        return s.str();
    }
};