#include "classes.h"
#include <string>
#include <iostream>

string Employee::getName() const {
    return name;
}

Employee::dob Employee::getDob() const {
    return dobirth;
};

int Employee::getSalary() const {
    return salary;
}

void Employee::getInfo() const {
    cout << getName() << "\t" << getSalary() << "\t" << getDob().date << "-" << getDob().month << "-" << getDob().year << endl;
}

void Employee::setName() {
    cout << "Enter name: ";
    cin >> name;
    if (name.size() <= 2) {
        name = "John Doe";
    }
}

void Employee::setDob() {
    cout << "Enter date: ";
    cin >> dobirth.date;
    cout << "Enter month: ";
    cin >> dobirth.month;
    cout << "Enter year: ";
    cin >> dobirth.year;
    if (2024 - dobirth.year <= 18) {
        dobirth.date = 1;
        dobirth.month = 1;
        dobirth.year = 2002;
    }
}

void Employee::setSalary() {
    cout << "Enter Salary: ";
    cin >> salary;
    if (salary <= 10000 || salary >= 100000) {
        salary = 10000;
    }
}

void Employee::setInfo() {
    setName();
    setDob();
    setSalary();
}

Employee Employee::compareAge(Employee& e2) const {
    if (dobirth.year < e2.dobirth.year) {
        return *this;
    }
    else return e2;
}

