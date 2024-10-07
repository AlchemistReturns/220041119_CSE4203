#include "celcius.h"
#include "farenhite.h"
#include "kelvin.h"
#include <iostream>
using namespace std;

Celcius::Celcius(double val) {
    (val < -273.15) ? temp=-273.15 : temp=val;
}
void Celcius::assign(double val) {
    temp = val;
}
void Celcius::display() const{
    cout << "The temperature is " << temp << " celcius" << endl;
}
Celcius::operator Farenhite() {
    double farenhiteTemp = temp * (9/5) + 32;
    return Farenhite(farenhiteTemp);
}
Celcius::operator Kelvin() {
    double kelvinTemp = temp + 273.15;
    return Kelvin(kelvinTemp);
}
