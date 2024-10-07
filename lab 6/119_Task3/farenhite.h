#ifndef FARENHITE_H_INCLUDED
#define FARENHITE_H_INCLUDED

class Celcius;
class Kelvin;

using namespace std;

class Farenhite{
private:
    double temp;
public:
    Farenhite(double val=0);
    void assign(double val);
    void display() const;
    operator Celcius();
    operator Kelvin();
};

#endif // FARENHITE_H_INCLUDED
