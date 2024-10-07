#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
using namespace std;

class Counter{
private:
    int count;
    int incrementStep;
public:
    Counter();
    void setIncrementStep(int step_val);
    int getCount() const;
    void increment();
    void resetCount(int step = 1);

    Counter operator+(const Counter& other) const;

    bool operator>(const Counter& other) const;
    bool operator<(const Counter& other) const;
    bool operator>=(const Counter& other) const;
    bool operator<=(const Counter& other) const;
    bool operator==(const Counter& other) const;
    bool operator!=(const Counter& other) const;

    Counter operator+=(const Counter& other);
    Counter operator++(int);
    Counter operator++();
};



#endif
