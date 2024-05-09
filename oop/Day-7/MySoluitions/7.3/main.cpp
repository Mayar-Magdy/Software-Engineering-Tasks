#include <iostream>
using namespace std;
#include "Address.h"
#include "Employee.h"
int main()
{
    Address Ad("Fayoum", "Egypt" , "Mostafa Hassan");
    Employee Emp(7074,"Mayar", &Ad);
    Emp.display();
    return 0;
}
