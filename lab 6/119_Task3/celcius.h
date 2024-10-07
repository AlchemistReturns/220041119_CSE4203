#ifndef CELCIUS_H_INCLUDED
#define CELCIUS_H_INCLUDED
#include <iostream>

class Farenhite;
class Kelvin;

using namespace std;

class Celcius{
private:
    double temp;
public:
    Celcius(double val=0);
    void assign(double val);
    void display() const;
    operator Farenhite();
    operator Kelvin();
};


#endif // CELCIUS_H_INCLUDED
