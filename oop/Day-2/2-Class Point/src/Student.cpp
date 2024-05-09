#include "Student.h"
#include <iostream>
using namespace std;
Student::Student()
{
    cout << "Constructor" << endl;
}
void Student::setId(int _id)
{
    Id = _id;
}
int Student::getId()
{
    return Id;
}
Student::~Student()
{
    cout << "Destructor Student" << endl;
}
