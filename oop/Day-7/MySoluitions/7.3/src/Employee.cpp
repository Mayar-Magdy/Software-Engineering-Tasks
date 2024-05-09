#include "Employee.h"
#include <iostream>
using namespace std;
Employee::Employee(int _id, string _name, Address* _address)
{
    id = _id;
    name = _name;
    address = _address;
}
void Employee::display()
{
    cout<<"id : "<<this->id <<"\n"<<"name : "<<name<<"\n"<< "city : " <<address->city<<"\n"<<"country : "<< address->country<<"\n"<<"region : "<<address->region<<"\n";
}
