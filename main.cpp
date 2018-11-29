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
    Pkw* p1 = new Pkw("Mazda 3", 5, 40, pp);
    Pkw p2 ("Mazda 3", 5, 40, pp);
    Pkw* p3 = new Pkw("Toyota", 6, 70, pp3);
    Pkw p4  ("VW TOUAREG", 2, 55, pp);
    verkehrsmittelSystem.fuegehinzu(*p1);
    verkehrsmittelSystem.fuegehinzu(p2);
    verkehrsmittelSystem.fuegehinzu(*p3);
    verkehrsmittelSystem.fuegehinzu(p4);



    Luftfahrzeuge *l = new Luftfahrzeuge("Boeing 747", 30000, pp);
    Luftfahrzeuge *l1 = new Luftfahrzeuge("AirBus A-380", 35000, pp1);
    Luftfahrzeuge *l2 = new Luftfahrzeuge("Boieng 777", 32000, pp2);
    Luftfahrzeuge *l3 = new Luftfahrzeuge("AirBus A-320", 38000, pp3);
    verkehrsmittelSystem.fuegehinzu(*l);
    verkehrsmittelSystem.fuegehinzu(*l1);
    verkehrsmittelSystem.fuegehinzu(*l2);
    verkehrsmittelSystem.fuegehinzu(*l3);


    Radfahrzeuge *r = new Radfahrzeuge("VTT",30,pp);
    Radfahrzeuge *r1 = new Radfahrzeuge("Moukong", 40, pp1);
    Radfahrzeuge *r2 = new Radfahrzeuge("Moukouagne", 50, pp2);
    Radfahrzeuge *r3 = new Radfahrzeuge("Velo", 70, pp3);
    verkehrsmittelSystem.fuegehinzu(*r);
    verkehrsmittelSystem.fuegehinzu(*r1);
    verkehrsmittelSystem.fuegehinzu(*r2);
    verkehrsmittelSystem.fuegehinzu(*r3);
    int i =1;
    cout << "Die verkehrsmitteln:\n";
    cout << "---------------------Pkw: --------------------\n";
   /* for ( i = 1; i< ;i++) {
        cout << " " << i << ". "<< pkw.text()<<"\n";
        i++;

    }*/
    cout << " " << i++ << ". "<< p1->text()<<"\n";
    cout << " " << i++ << ". "<< p2.text()<<"\n";
    cout << " " << i++ << ". "<< p3->text()<<"\n";
    cout << " " << i++ << ". "<< p4.text()<<"\n";
    cout << "--------------Radfahrzeuge: --------------------\n";
   /* for (auto rad: verkehrsmittelSystem ) {
        cout << " " << i << ". "<< rad.text()<<"\n";
        i++;
    }*/
    cout << " " << i++ << ". "<< l->text()<<"\n";
    cout << " " << i++ << ". "<< l1->text()<<"\n";
    cout << " " << i++ << ". "<< l2->text()<<"\n";
    cout << " " << i++ << ". "<< l3->text()<<"\n";

    cout << "--------------Luftfahrzeuge: --------------------\n";
   /* for (auto luft: verkehrsmittelSystem.Luftfahrzeuge() ) {
        cout << " " << i << ". "<< luft.text()<<"\n";
        i++;
    }*/
    cout << " " << i++ << ". "<< r->text()<<"\n";
    cout << " " << i++ << ". "<< r1->text()<<"\n";
    cout << " " << i++ << ". "<< r2->text()<<"\n";
    cout << " " << i++ << ". "<< r3->text()<<"\n";

}