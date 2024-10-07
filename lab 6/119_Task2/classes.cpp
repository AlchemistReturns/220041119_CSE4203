#include "classes.h"
#include <iostream>
#include <math.h>
using namespace std;

Coordinate::Coordinate() {
    x = 0;
    y = 0;
}

Coordinate::Coordinate(float xval, float yval) {
    x = xval;
    y = yval;
}

Coordinate::~Coordinate() {
    //cout << "Co-ordinate deleted" << endl;
}

void Coordinate::display() const {
    cout << x << " " << y << endl;
}

float Coordinate::operator - (Coordinate c) const {
    return sqrt((c.x - this->x) * (c.x - this->x) + (c.y-this->y)*(c.y - this->y));
}

float Coordinate::getDistance() const {
    return sqrt((this->x*this->x) + (this->y * this->y));
}

void Coordinate::move_x(float val) {
    this->x += val;
}

void Coordinate::move_y(float val) {
    this->y += val;
}

void Coordinate::move(float x_val, float y_val) {
    this->y += y_val;
    this->x += x_val;
}

bool Coordinate::operator > (const Coordinate &c) const {
    return this->getDistance() > c.getDistance();
}

bool Coordinate::operator < (const Coordinate &c) const {
    return this->getDistance() < c.getDistance();
}

bool Coordinate::operator >= (const Coordinate &c) const {
    return this->getDistance() >= c.getDistance();
}

bool Coordinate::operator <= (const Coordinate &c) const {
    return this->getDistance() <= c.getDistance();
}

bool Coordinate::operator == (const Coordinate &c) const {
    return this->getDistance() == c.getDistance();
}

bool Coordinate::operator != (const Coordinate &c) const {
    return this->getDistance() != c.getDistance();
}

