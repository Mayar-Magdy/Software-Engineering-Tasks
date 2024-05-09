#include "Department.h"

Department::Department()
{
    departmentName=" ";
    persons=nullptr;
    no=0;
}
Department::Department(string _name, Person ** _persons,int _no)
{
  persons=_persons;
  no=_no;
  departmentName=_name;
}
void Department::displayDepartmentData()
{
   cout<<"Department Name : "<<departmentName<<endl;
   cout<<"Student Data : "<<endl;
   for(int i=0;i<no;i++)
    {
       persons[i]->display();
    }

}
void Department::changePasswords()
{
    string password;
    for(int i=0;i<no;i++)
    {
       cout<<"Enter New Password  ";
       cin>>password;
       persons[i]->changPassword(password);

    }
}
void Department::changeEmails()
{
   string _email;
    for(int i=0;i<no;i++)
    {
       cout<<"Enter New Email  ";
       cin>>_email;
       persons[i]->changPassword(_email);

    }

}
Department::~Department()
{
    //dtor
}
