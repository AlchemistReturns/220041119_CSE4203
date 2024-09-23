#include <bits/stdc++.h>
using namespace std;

class Time {
private:
    int hour, minute, second;
    void normalize() {
        if (second >= 60) {
            minute += second / 60;
            second = second % 60;
        }

        if (minute >= 60) {
            hour += minute / 60;
            minute = minute % 60;
        }

        if (hour >= 24) {
            hour = hour % 24;
        }
    }

public:
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    int hours() const {
        return hour;
    }

    int minutes() const {
        return minute;
    }

    int seconds() const {
        return second;
    }

    void reset(int h, int m, int s) {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
            hour = h;
            minute = m;
            second = s;
        } else {
            cout << "Invalid time input. Please ensure values are within the correct range." << endl;
        }
    }

    void advance(int h, int m, int s) {
        hour += h;
        minute += m;
        second += s;
        normalize();
    }

    void print() const {
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second << endl;
    }
};

int main() {
    Time t;

    t.reset(13, 45, 30);
    t.print();

    t.advance(2, 20, 50);
    t.print();

    t.advance(10, 50, 70);
    t.print();

    return 0;
}

