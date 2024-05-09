#include "Employee.h"

Employee::Employee()
{
    name = "Not Found";
    salary = 0.0;
    telephoneNumber = "Not Found";
    Id ++;
}
Employee::Employee(string _name)
{
    name = _name;
    salary = 0.0;
    telephoneNumber = "Not Found";
    Id ++;
}
Employee::Employee(string _name, double _salary)
{
    name = _name;
    salary = _salary;
    telephoneNumber = "Not Found";
    Id ++;
}
Employee::Employee(string _name, double _salary, string _tele)
{
    name = _name;
    salary = _salary;
    telephoneNumber = _tele;
    Id ++;
}

void Employee::setName(string _name)
{
    name = _name;
}
string Employee::getName()
{
    return "Hello " + name;
}
void Employee::setSalary(double _salary)
{
    salary = _salary;
}
double Employee::getSalary()
{
    return salary;
}
void Employee::setTelephone(string _tele)
{
    telephoneNumber = _tele;
}
string Employee::getTelephone()
{
    return telephoneNumber;
}

void Employee::displayData()
{
    cout << "-----------------------------" << endl;
    cout << "ID = " << getID() << endl;
    cout << "Name = " << getName() << endl;
    cout << "Salary = " << salary << endl;
    cout << "Telephone Number = " << telephoneNumber << endl;
    cout << "-----------------------------" << endl;
}
void Employee::displayData(string test)
{
    if(test == name)
        displayData();
    else
        cout << "No Data Found" << endl;
}
int Employee::displayData(double d)
{
    if(salary == d)
        return 1;
    else
        return 0;
}

Employee::~Employee()
{
    cout << "Destructor" << endl;
}


