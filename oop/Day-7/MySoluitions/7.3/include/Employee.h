#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Address.h"

class Employee
{
     private:
        Address* address;
     public:
        int id;
        string name;
        Employee(int , string , Address* );
        void display();

   };

#endif // EMPLOYEE_H
