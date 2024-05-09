#include "Person.h"
#include<iostream>
using namespace std;
Person::Person()
{
  id=0;
  password="123";
  email="@domain.com";
  name=" ";

}
void Person::setId(int _id)
{
  id=_id;
}
int Person::getId()
{
  return id;
}
void Person::setName(string _name)
{
  name=_name;
}
string Person::getName()
{
   return name;
}
void Person::setMail(string  _email)
{
  email=_email;
}
void Person::setPassword(string _password)
{
   password=_password;
}
void Person:: display()
{
   cout<<"id : "<<id<<" Name : "<<name<<" Email : "<<email<<" Password : "<<password<<endl;
}
void Person::modifiyEmail(string _email)
{
   email=_email;
}
void Person::changPassword(string _password)
{
   password=_password;
}
Person::~Person()
{
    //dtor
}
