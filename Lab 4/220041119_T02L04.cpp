#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;

    double CalFuel() {
        if (distance <= 1000) {
            return 500;
        }
        else if (distance > 1000 && distance <= 2000) {
            return 1100;
        }
        else {
            return 2200;
        }
    }

public:
    Flight() : flightNumber(0), destination("Nowhere"), distance(0.0), maxFuelCapacity(100.50) {}

    void FeedInfo() {
        cout << "Enter Flight Number: ";
        cin >> flightNumber;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Distance (in km): ";
        cin >> distance;
        cout << "Enter Max Fuel Capacity: ";
        cin >> maxFuelCapacity;
    }

    void ShowInfo() {
        cout << endl;
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Max Fuel Capacity: " << maxFuelCapacity << " liters" <<endl;

        double requiredFuel = CalFuel();
        if (maxFuelCapacity >= requiredFuel) {
            cout << "Fuel capacity is fit for this flight distance." << endl;
        } else {
            cout << "Not sufficient Fuel Capacity for this flight." << endl;
        }
    }
};

int main(void) {

    Flight flight;
    flight.FeedInfo();
    flight.ShowInfo();



    return 0;
}
