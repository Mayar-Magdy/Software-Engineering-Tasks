#include "Employee.h"
//int Employee::counter =0;
Employee::Employee() : name(""), employeeId(0), salary(0.0)
{
    //name = "";
    //employeeId=0;
    //salary=0.0;
}
Employee::Employee(string _name, int _employeeId, double _salary)
    :name(_name), employeeId(_employeeId), salary(_salary)
{
    /*for(int i=0; i<3;i++)
    {
        cout << "Enter Certificate Name " << i+1 << " : " ;
        cin >> certifiactes[i] ;
    }*/
    counter++;
}

void Employee::displayInfo()
{
    cout << "ID : " << employeeId << endl <<
         "Name : " << name << endl <<
         "Salary : " << salary << " EGP" << endl<<
         "Certificates : " << endl;
    for(int i=0; i<3; i++)
    {
        cout << "\t" <<certifiactes[i] << endl;
    }
}
Employee::~Employee()
{
    //dtor
}



void Employee::setEmployeeInfo()
{
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Employee ID : ";

    while(true)
    {
        int id=0;
        cin>> id;
        if(id <= employeeId)
            cout << "Error ID -> must be grater than : " << employeeId << endl;
        else
        {
            employeeId = id;
            break;
        }
    }

    cout << "Enter Salary : ";
    cin >> salary;
    cout << "Employee updated successfully."<<endl;
}

void Employee::displayInfo(bool showId)
{
    if(showId)
        displayInfo();
    else
        cout << "Your Name : " << name << " , ID : " << employeeId << endl;
}

Employee Employee::operator+(Employee other)
{
    Employee result;
    result.name = name + " & " + other.name;
    /*
    if(employeeId > other.employeeId)
        result.employeeId = employeeId;
    else
        result.employeeId = other.employeeId;
        */
    result.employeeId =  (employeeId > other.employeeId)? employeeId:other.employeeId;
    result.salary = this->salary + other.salary;

    return result;
}

void Employee::operator() (string meassage)
{
    cout << name << "(" << employeeId << ")" << meassage << "ed done" << endl;
}
string Employee::operator[] (string _name)
{
    int Size =0 ;
    int length = (name.length() > _name.length()) ? name.length() : _name.length();
    for(int i=0; i< length; i++)
    {
        if(toupper(name[i]) == toupper(_name[i]) )
        {
            Size++;
        }
    }

    if(length == Size)
        return "Matched";
    else
        return "Sorry , Not found !!!!";
}

