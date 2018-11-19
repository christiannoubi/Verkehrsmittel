#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include "Position.h"
#include <vector>
using namespace std;


class Verkehrsmittel {

private:
    string name;
    Position position;

public:
    Verkehrsmittel () {

    }
    Verkehrsmittel ( string name, Position pos) {
        this->name = name;
        
    }


    string getName () const {
        return name;
    }
    virtual string text () {
        stringstream s;

        s << "Name: "<<  getName();
        return s.str();
    }
};
