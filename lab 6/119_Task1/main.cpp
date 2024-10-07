#include <iostream>
#include "classes.h"
using namespace std;

int main()
{
    Counter c1, c2, c3;
    c2.setIncrementStep(3);
    cout << c2.getCount() << " " << c3.getCount() << endl;
    c3.setIncrementStep(3);
    c3.increment();
    c2.increment();
    c1 = c2 + c3;
    cout << c2.getCount() << " " << c3.getCount() << endl;
    cout << c2.getCount() << " " << c3.getCount() << endl;
    cout << c1.getCount() << endl;
    c2.resetCount();
    c2.setIncrementStep(3);
    c2 += c3;
    c1 = c2+c3;
    cout << c2.getCount() << " " << c3.getCount() << endl;
    cout << c1.getCount() << endl;
    cout << endl;
    cout << (c1 > c2) << endl;
    cout << (c1 < c2) << endl;
    cout << (c1 == c2) << endl;
    cout << (c1 != c2) << endl;
    cout << (c1 >= c2) << endl;
    cout << (c1 <= c2) << endl;
    cout << (c1++).getCount() << endl;
    cout << c1.getCount() << endl;
    return 0;
}
