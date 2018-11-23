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
    Pkw (string name, int anzahlTueren, int anzahlraeder, Position position) : Radfahrzeuge(name, anzahlraeder, position){
        this->anzahlTueren = anzahlTueren;
    }

    string text () {
        stringstream s;
        s << "Name: "<<  this->getName() <<", Anzahltueren: " <<anzahlTueren <<", Anzahlraeder: "<<this->getAnzahlRaeder() ;
        return s.str();
    }
};