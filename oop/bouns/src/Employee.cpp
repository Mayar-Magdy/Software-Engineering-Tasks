#include "Employee.h"
#include<iostream>
using namespace std;
Employee::Employee():Person()
{
   salary=0;
   generalId+=1;
   setId(generalId + 200);
}
Employee::Employee(string _name,string _email,string _password,double _salary)
{
    salary=_salary;
    generalId+=1;
    setId(generalId + 200);
    setName(_name);
    modifiyEmail(_email);
    changPassword(_password);

}

void Employee::setSalary(double _salary)
{
  salary=_salary;
}
double Employee::getSalary()
{
  return salary;
}
void Employee::display()
{
   Person::display();
   cout<<"Salary : "<<salary<<endl;
}
void Employee::modifiyEmail(string _email)
{
   int befor=0;
   int t=0;
  while(_email[t]!='@')
  {
    befor+=1;
    t++;
  }
    string email2=_email;
   _email.erase(0,t);

   if(befor >=1 && _email=="@company.com")
     {
       cout<<"Email modified successfully"<<endl;
       setMail(email2);
     }
   else
     cout<<"invalid email"<<endl;

}

void Employee::changPassword(string _password)
{
  int numberOfCharacters=0;
  int numberOfSpecialCharacters=0;
  int numbers=0;
  for(int i=0;i<_password.length();i++)

  {
    if(_password[i]>='0' && _password[i]<='9')
      numbers+=1;
    else if((_password[i]>='a' && _password[i]<='z') || (_password[i]>='A' && _password[i]<='Z'))
     numberOfCharacters+=1;
    else if(_password[i]=='_' || _password [i] =='@')
     numberOfSpecialCharacters+=1;
  }
  if(numbers>=2 && numberOfCharacters >=4 && numberOfSpecialCharacters ==1)
  {
    setPassword(_password);
   cout<<"Password modified successfully"<<endl;

  }
  else
   cout<<"invalid password"<<endl;

}
Employee::~Employee()
{
    //dtor
}
