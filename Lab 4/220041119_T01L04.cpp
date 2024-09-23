#include <iostream>
using namespace std;

class Calculator {
private:
    int status;
    int getStatus() const {
        return status;
    }
    void setStatus(int status) {
        this->status = status;
    }

public:
    Calculator() : status(0) {}
    Calculator(int status) : status(status) {}

    void add(int value) {
        setStatus(getStatus() + value);
    }

    void subtract(int value) {
        setStatus(getStatus() - value);
    }

    void multiply(int value) {
        setStatus(getStatus() * value);
    }

    int divide(int value) {
        if (value == 0) {
            cout << "Invalid arithmetic operation" << endl;
            return 0;
        }
        int remainder = getStatus() % value;
        setStatus(getStatus()/value);
        return remainder;
    }

    void clear() {
        setStatus(0);
    }

    void display() {
        cout << "Calculator display: " << getStatus()<< endl;
    }

    ~Calculator() {
        cout << "Calculator display: " << getStatus() << endl;
        cout << "Destructor of the Calculator object is called." << endl;
    }

};

int main(void) {

    Calculator calc;
    calc.display();
    calc.add(10);
    calc.display();
    calc.multiply(7);
    calc.display();
    calc.subtract(6);
    calc.display();
    calc.divide(8);
    calc.display();
    calc.divide(0);
    calc.display();
    calc.clear();


    return 0;
}
