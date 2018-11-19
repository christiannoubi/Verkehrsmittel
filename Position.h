#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class Position {

private:
    int x;
    int y;
public:
    Position () {

    }

   Position (int xPos, int yPos) {
       this->x = xPos;
       this->y = yPos;
   }

    int getX() const {
        return x;
    }

    void setX(int x) {
        Position::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Position::y = y;
    }

    string text() const {
        stringstream s;
        s << "(" << x << "," << y << ")";
        return s.str();
   }

};