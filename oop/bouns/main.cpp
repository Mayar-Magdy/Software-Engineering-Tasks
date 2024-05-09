#include <iostream>
#include"Person.h"
#include"Student.h"
#include"Employee.h"
#include"Department.h"
using namespace std;
int Employee::generalId=0;
int Student::general_Id=0;
int main()
{
     Person * _persons[]={new Employee("Muhammed ahmed","muhammed@company.com","BACD_1236",5000),
     new Student("Mostafa Ahmed","Mostafa@school.com","Mostafa@654",2)};
     Department *_department=new Department("Computer Science",_persons,2);
     _department->displayDepartmentData();
     _department->changePasswords();
     _department->changeEmails();

    return 0;
}
