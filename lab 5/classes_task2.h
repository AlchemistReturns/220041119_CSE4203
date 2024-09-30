#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <string>
#include <iostream>
#include <stdio.h>
typedef struct dob dob;
using namespace std;

class Employee{
    private:
        string name;
        struct dob {
            int date;
            int month;
            int year;
        } dobirth;
        int salary;

    public:
        string getName() const;
        dob getDob() const;
        int getSalary() const;
        void getInfo() const;
        void setName();
        void setDob();
        void setSalary();
        void setInfo();
        Employee compareAge(Employee& e2) const;
};





#endif


