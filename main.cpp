#pragma once;
#include <string>
#include <sstream>
#include <iostream>
#include "VerkehrsmittelSystem.h"
using namespace std;


int main() {

    VerkehrsmittelSystem verkehrsmittelSystem;

    Position pp (5,4);
    Position pp1 (2,5);
    Position pp2 (5,6);
    Position pp3 (5,8);
    verkehrsmittelSystem.fuegehinzu(Pkw("Mercedez Benz", 3, 55, pp));
    verkehrsmittelSystem.fuegehinzu(Pkw("Mazda 3", 5, 40, pp));
    verkehrsmittelSystem.fuegehinzu(Pkw("Volvo", 4, 45, pp2));
    verkehrsmittelSystem.fuegehinzu(Pkw("Toyota", 6, 70, pp3));
    verkehrsmittelSystem.fuegehinzu(Pkw("VW TOUAREG", 2, 55, pp));

    Luftfahrzeuge *l = new Luftfahrzeuge("Boeing 747", 30000, pp);
    Luftfahrzeuge *l1 = new Luftfahrzeuge("AirBus A-380", 35000, pp1);
    Luftfahrzeuge *l2 = new Luftfahrzeuge("Boieng 777", 32000, pp2);
    Luftfahrzeuge *l3 = new Luftfahrzeuge("AirBus A-320", 38000, pp3);

    Radfahrzeuge *r = new Radfahrzeuge("VTT",30,pp);
    Radfahrzeuge *r1 = new Radfahrzeuge("Moukong", 40, pp1);
    Radfahrzeuge *r2 = new Radfahrzeuge("Moukouagne", 50, pp2);
    Radfahrzeuge *r3 = new Radfahrzeuge("Velo", 70, pp3);

    int i =1;
    cout << "Die verkehrsmitteln:\n";
    cout << "---------------------Pkw: --------------------\n";
    for (auto pkw: verkehrsmittelSystem.pkws() ) {
        cout << " " << i << ". "<< pkw.text()<<"\n";
        i++;

    }
    cout << "--------------Radfahrzeuge: --------------------\n";
    /*for (auto rad: verkehrsmittelSystem.Radfahrzeuge() ) {
        cout << " " << i << ". "<< rad.text()<<"\n";
        i++;
    }*/
    cout << " " << i++ << ". "<< l->text()<<"\n";
    cout << " " << i++ << ". "<< l1->text()<<"\n";
    cout << " " << i++ << ". "<< l2->text()<<"\n";
    cout << " " << i++ << ". "<< l3->text()<<"\n";

    cout << "--------------Luftfahrzeuge: --------------------\n";
    /*for (auto luft: verkehrsmittelSystem.Luftfahrzeuge() ) {
        cout << " " << i << ". "<< luft.text()<<"\n";
        i++;
    }*/
    cout << " " << i++ << ". "<< r->text()<<"\n";
    cout << " " << i++ << ". "<< r1->text()<<"\n";
    cout << " " << i++ << ". "<< r2->text()<<"\n";
    cout << " " << i++ << ". "<< r3->text()<<"\n";
}