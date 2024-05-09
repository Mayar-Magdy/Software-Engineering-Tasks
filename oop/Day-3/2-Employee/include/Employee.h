#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
class Employee
{
    private:
        // static variable
        static int Id;
        // variables
        string name;
        double salary;
        string telephoneNumber;
        // username, email, address, password, birthdate
    public:
        // constructor
        Employee();
        Employee(string); // overload - polymorphism
        Employee(string, double);
        Employee(string, double, string);
        // setter & Getter
        void setName(string);
        string getName();
        void setSalary(double);
        double getSalary();
        void setTelephone(string);
        string getTelephone();
        // functionality
        void displayData();
        void displayData(string);
        int displayData(double);
        //static method
        static int getID();
        ~Employee();


};

#endif // EMPLOYEE_H
