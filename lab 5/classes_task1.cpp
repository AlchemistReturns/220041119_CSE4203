#include "classes.h"
#include <string>
#include <iostream>
using namespace std;

/*
class SavingsAccount {
private:
    string accName;
    string address;
    double interestRate;
    double currentBalance;

public:
    string getAccName();
    string getAddress();
    double getInterestRate();
    double currentBalance();

    void setAccName();
    void setAddress();
    void setInterestRate();
    void setCurrentBalance();

    void deposit(double amount);
    void withdraw(double amount);
    double calculateInterest(int periodInMonths);
    void disburseInterest(int periodInMonths);
};
*/

SavingsAccount::SavingsAccount() {
    accName = "John Doe";
    address = "44, New Jersey, New York, USA";
    interestRate = 0.025;
    currentBalance = 0;
}

string SavingsAccount::getAccName() {
    return accName;
}

string SavingsAccount::getAddress() {
    return address;
}

double SavingsAccount::getInterestRate() {
    return interestRate;
}

double SavingsAccount::getCurrentBalance() {
    return currentBalance;
}

void SavingsAccount::setAccName(string s1) {
    accName = s1;
}

void SavingsAccount::setAddress(string s2) {
    address = s2;
}

void SavingsAccount::setInterestRate(double d1) {
    interestRate = d1;
}

void SavingsAccount::setCurrentBalance(double d2) {
    currentBalance = d2;
    minBalance = currentBalance;
}

void SavingsAccount::deposit(double d) {
    if (d < 0) cout << "Invalid amount";
    else {
        currentBalance += d;
    }
}

void SavingsAccount::withdraw(double d) {
    if (d > currentBalance) cout << "Invalid amount";
    else {
        currentBalance -= d;
        minBalance = min(minBalance, currentBalance);
    }
}

double SavingsAccount::calculateInterest(int periodInMonths) {
    return minBalance * interestRate / 12 * periodInMonths;
}

void SavingsAccount::disburseInterest(int periodInMonths) {
    currentBalance += calculateInterest(periodInMonths);
    minBalance = currentBalance;
}
