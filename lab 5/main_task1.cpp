#include "classes.h"
#include <string>
#include <iostream>
#include <random>
#include <time.h>
#include <algorithm>
using namespace std;

void EditInformationByKeyboard(SavingsAccount& s) {

    string s1;
    double d1;
    cout << "Enter account name: ";
    cin >> s1;
    s.setAccName(s1);
    cout << "Enter address: ";
    cin >> s1;
    s.setAddress(s1);
    cout << "Enter interest rate: ";
    cin >> d1;
    s.setInterestRate(d1);
    cout << "Enter current Balance: ";
    cin >> d1;
    s.setCurrentBalance(d1);

    return;
}

void generateInformaiotnRandom(SavingsAccount& s) {
    string names[10] = {"Abul", "Jhankar", "Habul", "Kablu", "Bablu", "Kashem", "Jamal", "Kamal", "Nasir", "Mehedi"};
    string addresses[10] = {"Abul", "Jhankar", "Habul", "Kablu", "Bablu", "Kashem", "Jamal", "Kamal", "Nasir", "Mehedi"};

    s.setAccName(names[rand()%10] + names[rand()%10]);
    s.setAddress(addresses[rand()%10] + addresses[rand()%10] + addresses[rand()%10] + addresses[rand()%10]);
    s.setInterestRate((2 + rand()%2 + 0.1)/10);
    s.setCurrentBalance(1000 + rand()%4000);

    return;
}

void ShowInterestAll(SavingsAccount ar[]) {
    int option;
    for (int i = 0; i < 100; i++) {
        cout << ar[i].getInterestRate() << endl;
    }
    cout << "Do you want to disburse\n1: Yes\n2:no";
    cin >> option;
    if (option == 1) {
        for (int i = 0; i < 100; i++) {
            ar[i].disburseInterest(3);
        }
    }
    return;
}

void ShowAllAlphabetically(SavingsAccount ar[]) {
    sort(ar, ar+100, [](SavingsAccount& a, SavingsAccount& b) {
        return a.getAccName() > b.getAccName();
    });
    for (int i = 0; i < 100; i++) {
        cout << ar[i].getAccName() << "\t" << ar[i].getCurrentBalance() << endl;
    }
    return;
}

int main()
{
    srand(time(NULL));
    SavingsAccount arr[100];
    for (int i = 0; i < 5; i++) {
        EditInformationByKeyboard(arr[i]);
    }
    for (int i = 5; i < 100; i++) {
        generateInformaiotnRandom(arr[i]);
    }
    ShowInterestAll(arr);
    ShowAllAlphabetically(arr);

    return 0;
}
