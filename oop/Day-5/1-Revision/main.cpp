#include <iostream>
#include "Employee.h"
using namespace std;
int Employee::counter=0;

int Employee::getCounter()
{
    return counter;
}

int main()
{
    /*
    Employee e("Ahmed", 100, 5000.0);
    e.displayInfo();
    */
    Employee eSetInfo("Asmaa", 101, 6000.0);
    //eSetInfo.setEmployeeInfo();

    eSetInfo.displayInfo(false);
    cout << endl << endl;
    Employee e1("Ahmed", 100, 5000.2);
    Employee e2("Ali" , 105, 6000.25);
    Employee e3("Hussin" , 102, 7000.25);
    Employee e4("Ali" , 103, 8000.25);
    e4("Check");
    cout << endl << endl;
    cout << e4["aliAa"];

    cout << endl << endl;
    Employee result = e1 + e2 + e3 + e4;
    result.displayInfo(true);

    cout << "Counter = " << Employee::getCounter() << endl;
    cout << "Counter = " << Employee::counter;
    return 0;
}
