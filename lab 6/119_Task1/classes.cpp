#include "classes.h"
#include <iostream>
using namespace std;

Counter::Counter() {
    count = 0;
    incrementStep = 1;
}

void Counter::setIncrementStep(int step_val) {
    if (count == 0) {
        if (step_val > 0) {
            incrementStep = step_val;
        } else {
            cout << "Cannot assign negative increment step. Keeping previous value." << endl;
        }
    } else {
        cout << "Cannot set increment step while count is not zero." << endl;
    }
}

int Counter::getCount() const {
    return count;
}

void Counter::increment() {
    count += incrementStep;
}

void Counter::resetCount(int step) {
    count = 0;
    incrementStep = (step > 0) ? step : 1;
}

Counter Counter::operator+(const Counter& other) const {
    Counter result = other;
    if (this->incrementStep == other.incrementStep) {
        Counter result;
        result.count = this->count + other.count;
        result.incrementStep = this->incrementStep;
        return result;
    } else {
        cout << "Increment steps are not the same. Cannot add the objects." << endl;
        return *this;
    }
}

bool Counter::operator>(const Counter& other) const {
    return this->count > other.count;
}

bool Counter::operator<(const Counter& other) const {
    return this->count < other.count;
}

bool Counter::operator>=(const Counter& other) const {
    return this->count >= other.count;
}

bool Counter::operator<=(const Counter& other) const {
    return this->count <= other.count;
}

bool Counter::operator==(const Counter& other) const {
    return this->count == other.count;
}

bool Counter::operator!=(const Counter& other) const {
    return this->count != other.count;
}

Counter Counter::operator+=(const Counter& other) {
    if (this->incrementStep == other.incrementStep) {
        this->count += other.count;
    } else {
        cout << "Increment steps are not the same. Cannot add the objects." << endl;
    }
    return *this;
}

Counter Counter::operator++(int) {
    Counter temp = *this;
    increment();
    return temp;
}

Counter Counter::operator++() {
    increment();
    return *this;
}
