#include "celcius.h"
#include "farenhite.h"
#include "kelvin.h"
#include <iostream>
using namespace std;

Kelvin::Kelvin(double val) {
    (val < 0) ? temp=0 : temp=val;
}
void Kelvin::assign(double val) {
    temp = val;
}
void Kelvin::display() const {
    cout << "The temperature is " << temp << " kelvin" << endl;
}
Kelvin::operator Celcius() {
    double celciusTemp = temp - 273.15;
    return Celcius(celciusTemp);
}
Kelvin::operator Farenhite() {
    double farehniteTemp = (temp-273.15) * (1.8) + 32;
    return Farenhite(farehniteTemp);
}
