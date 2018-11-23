#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include "Position.h"
#include <vector>
using namespace std;


class Verkehrsmittel : public Position{

private:
    string name;

public:
    Verkehrsmittel () {

    }
    Verkehrsmittel ( string name, Position pos) {
        this->name = name;
    }
    void bewegen (Position position1) {

    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Verkehrsmittel::name = name;
    }

   /* const Position &getPosition() const {
        return position;
    }

    void setPosition(const Position &position) {
        Verkehrsmittel::position = position;
    }*/


   /* string text () {
        stringstream s;

        s << "Name: "<<  name << "Position: ( " << position.getX() << ";"<< position.getY() <<")" ;
        return s.str();
    }*/
};
