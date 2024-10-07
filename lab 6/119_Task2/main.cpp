#include <iostream>
#include <ctime>
#include "classes.h"
using namespace std;

void randomAssignment(Coordinate c[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++){
        c[i].move_x((float) (rand()%20-10));
        c[i].move_y((float) (rand()%20-10));
    }
}
void sort(Coordinate c[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (c[j] > c[j+1]) {
                Coordinate temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
}
void highest(Coordinate c[], int size) {
    Coordinate mx = c[0];
    for (int i = 1; i < size; i++) {
        if (c[i] > mx) {
            mx = c[i];
        }
    }
    mx.display();
}
void lowest(Coordinate c[], int size) {
    Coordinate mn  = c[0];
    for (int i = 1; i < size; i++) {
        if (c[i] < mn) {
            mn = c[i];
        }
    }
    mn.display();
}

int main()
{
    const int n = 10;
    Coordinate coord[n];
    randomAssignment(coord, n);
    for (int i = 0; i < n; i++) {
        coord[i].display();
    }
    highest(coord, n);
    lowest(coord, n);
    return 0;
}
