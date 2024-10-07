#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
using namespace std;

class Coordinate {
    float x, y;

public:
    Coordinate();
    Coordinate(float xval, float yval);
    ~Coordinate();

    void display() const;

    float operator - (Coordinate c) const;

    float getDistance() const;

    void move_x(float val);

    void move_y(float val);

    void move(float x_val, float y_val);

    bool operator > (const Coordinate &c) const;
    bool operator < (const Coordinate &c) const;
    bool operator >= (const Coordinate &c) const;
    bool operator <= (const Coordinate &c) const;
    bool operator == (const Coordinate &c) const;
    bool operator != (const Coordinate &c) const;

};

#endif
