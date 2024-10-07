#include "celcius.h"
#include "farenhite.h"
#include "kelvin.h"
#include <iostream>
using namespace std;

Farenhite::Farenhite(double val) {
    (val < -459.67) ? temp=-459.67 : temp=val;
}
void Farenhite::assign(double val) {
    temp = val;
}
void Farenhite::display() const{
    cout << "The temperature is " << temp << " farenhite" << endl;
}
Farenhite::operator Celcius() {
    double celciusTemp = (temp-32) * (5/9);
    return Celcius(celciusTemp);
}
Farenhite::operator Kelvin() {
    double kelvinTemp = (temp-32) * (5/9) + 273.15;
    return Kelvin(kelvinTemp);
}
