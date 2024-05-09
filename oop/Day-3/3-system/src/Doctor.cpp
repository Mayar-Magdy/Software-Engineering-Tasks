#include "Doctor.h"

Doctor::Doctor()
{
    cout << "Default Constructor" << endl;
    name = "Not Found";
}
Doctor::Doctor(string _name)
{
    name = _name;
}
void Doctor::setName(string _name)
{
    name = _name;
}
string Doctor::getName()
{
    return name;
}
void Doctor::print()
{
    cout << "Doctor Name = " << name << endl;
}

Doctor::~Doctor()
{
    cout << "Destructor" << endl;
}
