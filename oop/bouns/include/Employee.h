#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"Person.h"
class Employee:public Person
{
    private:
    double salary;
    static int generalId;
    public:
        Employee();
        Employee(string _name,string _email,string _password,double _salary);
        void setSalary(double);
        double getSalary();
        void display();
        void modifiyEmail(string);
        void changPassword(string);
        ~Employee();


};

#endif // EMPLOYEE_H
