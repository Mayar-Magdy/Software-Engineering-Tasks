#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
    public:
        string certifiactes[3] = {"ITI", "NTI", "TIEC"};
        Employee();
        Employee(string, int, double);

        ~Employee();

        void setEmployeeInfo();
        void displayInfo(bool);
        Employee operator+(Employee other);

        void operator() (string);
        string operator[] (string);

        static int counter;
        static int getCounter();

    private:
        string name;
        int employeeId;
        double salary;
        void displayInfo();

};

#endif // EMPLOYEE_H
