#ifndef KELVIN_H_INCLUDED
#define KELVIN_H_INCLUDED

class Farenhite;
class Celcius;

using namespace std;

class Kelvin{
private:
    double temp;
public:
    Kelvin(double val=0);
    void assign(double val);
    void display() const;
    operator Farenhite();
    operator Celcius();
};


#endif // KELVIN_H_INCLUDED
