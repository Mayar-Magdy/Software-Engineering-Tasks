#include <iostream>
#include "Employee.h"
using namespace std;
// static variable, static method
int Employee::Id = 0;
int Employee::getID()
{
    return Id+100;
}
int main()
{
    Employee e1("Ahmed", 1200.3,"01000000101");
    e1.displayData() ;

    Employee e2("Asmaa", 2000.25,"01004500101");
    e2.displayData() ;

    Employee e3("Moahmed", 3000.25);
    e3.displayData() ;

    cout << e3.getID() << endl;
    //cout << e3.Id << endl;


    Employee E1;
    E1.displayData();

    Employee E2;
    E2.displayData();
    string varE3;
    double varSalE3;
    cout << "Enter name : " ;
    cin >> varE3;
    cout << "Enter telephone number : " ;
    cin >> varE3;
    cout << "Enter expected Salary : " ;
    cin >> varSalE3;


    return 0;
}
