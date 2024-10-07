#include <iostream>
#include "kelvin.h"
#include "celcius.h"
#include "farenhite.h"
using namespace std;

int main()
{
    Celcius c(25);
    Kelvin k(273.15);
    Farenhite f(32);
    c.display();
    f.display();
    k.display();
    f = c;
    f.display();
    k = c;
    k.display();

    return 0;
}
