#include <iostream>
#include "classes.h"

using namespace std;

int main()
{
    Employee e1, e2;
    e1.setInfo();
    cout << endl;
    e2.setInfo();
    cout << endl;
    e1.getInfo();
    cout << endl;
    e2.getInfo();
    cout << endl;
    cout << "Is older: " << e1.compareAge(e2).getName() << endl;
    return 0;
}
