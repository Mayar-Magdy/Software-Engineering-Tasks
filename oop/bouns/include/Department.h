#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include"Person.h"
class Department
{
    private:
    string departmentName;
     Person**persons;
    int no;
    public:
        Department();
        Department(string ,Person **,int);
        void changeEmails();
        void changePasswords();
        void displayDepartmentData();
        ~Department();


};

#endif // DEPARTMENT_H
