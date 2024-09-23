#include <iostream>
using namespace std;

class Counter {
private:
    int count;
    int increment_step;

public:
    Counter(int step = 1) {
        count = 0;
        increment_step = step;
    }

    void setIncrementStep(int step) {
        increment_step = step;
    }

    int getCount() {
        return count;
    }

    void increment() {
        count += increment_step;
    }

    void resetCount() {
        count = 0;
    }
};

int main(void) {

    Counter counter;
    cout << counter.getCount() << endl;
    counter.setIncrementStep(2);
    counter.increment();
    cout << counter.getCount() << endl;
    counter.resetCount();
    cout << counter.getCount() << endl;


    return 0;
}
