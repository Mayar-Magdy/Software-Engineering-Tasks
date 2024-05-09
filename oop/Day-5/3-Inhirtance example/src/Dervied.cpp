#include "Dervied.h"
#include <iostream>
using namespace std;
Dervied::Dervied()
{
    w = z = 0;
    y= 10;
    cout << "Defualt Constructor Dervied Class" << endl;
}
Dervied::Dervied(int o) :Base(o)  // chain constructor
{
    w = z= o;
    y= 10;
    cout << "One parameter Constructor Dervied Class" << endl;
}
Dervied::Dervied(int _w,int _z,int p,int m,int n): Base(p,m,n)
{
    w = _w;
    z = _z;
    y= 10;
    cout << "five parameter Constructor Dervied Class" << endl;
}
void Dervied::MyFunction()
{
    cout << "Dervied Class" << endl;
}
int Dervied::productWZXR()
{
    return w*z*Base::productWZXR();
}
Dervied::~Dervied()
{
    //dtor
}
