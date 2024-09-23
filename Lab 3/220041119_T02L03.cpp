#include <bits/stdc++.h>
using namespace std;

class Temperature {
private:
    double value;
    string unit;

    bool isValidUnit(string u) {
        return u == "Celsius" || u == "Fahrenheit" || u == "Kelvin";
    }

    bool isValidTemperature(double v, string u) {
        if (u == "Celsius" && v >= -273.15) return true;
        if (u == "Fahrenheit" && v >= -459.67) return true;
        if (u == "Kelvin" && v >= 0) return true;
        return false;
    }

public:
    Temperature() {
        value = 0;
        unit = "Celsius";
    }

    void assign(double tempValue, string tempUnit) {
        if (!isValidUnit(tempUnit)) {
            cout << "Invalid unit. Please use 'Celsius', 'Fahrenheit', or 'Kelvin'." << endl;
            return;
        }

        if (!isValidTemperature(tempValue, tempUnit)) {
            cout << "Invalid temperature. Temperature cannot be below absolute zero." << endl;
            return;
        }

        value = tempValue;
        unit = tempUnit;
    }

    void convert(const string targetUnit) {
        if (!isValidUnit(targetUnit)) {
            cout << "Invalid target unit. Please use 'Celsius', 'Fahrenheit', or 'Kelvin'." << endl;
            return;
        }

        double convertedValue = value;

        if (unit == "Celsius") {
            if (targetUnit == "Fahrenheit") {
                convertedValue = (value * 9/5) + 32;
            } else if (targetUnit == "Kelvin") {
                convertedValue = value + 273.15;
            }
        } else if (unit == "Fahrenheit") {
            if (targetUnit == "Celsius") {
                convertedValue = (value - 32) * 5/9;
            } else if (targetUnit == "Kelvin") {
                convertedValue = (value - 32) * 5/9 + 273.15;
            }
        } else if (unit == "Kelvin") {
            if (targetUnit == "Celsius") {
                convertedValue = value - 273.15;
            } else if (targetUnit == "Fahrenheit") {
                convertedValue = (value - 273.15) * 9/5 + 32;
            }
        }

        value = convertedValue;
        unit = targetUnit;

        return;
    }

    double getValue() {
        return value;
    }
    string getUnit() {
        return unit;
    }

    void print() {
        cout << "The temperature is " << value << " " << unit << endl;
    }
};

int main() {
    Temperature temp;

    temp.assign(100, "Celsius");
    temp.print();

    temp.convert("Fahrenheit");
    cout << "Converted to Fahrenheit: " << temp.getValue() << " " << temp.getUnit() << endl;

    temp.convert("Kelvin");
    cout << "Converted to Kelvin: " << temp.getValue() << " " << temp.getUnit() << endl;

    return 0;
}

