#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class SavingsAccount {
private:
    string accName;
    string address;
    double interestRate;
    double currentBalance;
    double minBalance;

public:
    SavingsAccount();
    string getAccName();
    string getAddress();
    double getInterestRate();
    double getCurrentBalance();

    void setAccName(string s1);
    void setAddress(string s2);
    void setInterestRate(double d1);
    void setCurrentBalance(double d2);

    void deposit(double amount);
    void withdraw(double amount);
    double calculateInterest(int periodInMonths);
    void disburseInterest(int periodInMonths);
};




#endif
