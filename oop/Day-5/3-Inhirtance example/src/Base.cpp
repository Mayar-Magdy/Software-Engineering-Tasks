#include "Base.h"
#include <iostream>
using namespace std;
Base::Base()
{
    x = y = 0;
    cout << "base constructor" << endl;
}
Base::Base(int val)
{
    x = y = val;
    cout << "base one parameter constructor" << endl;
}

Base::Base(int _x,int _y,int _r) // 3,4,5
{
    x = _x;
    y = _y;
    r = _r;
    cout << "base three parameter constructor" << endl;
}
void Base::setX(int _x)
{
    x = _x;
}
int Base::getX()
{
    return x;
}
void Base::setR(int _r)
{
    r = _r;
}
int Base::getR()
{
    return r;
}
int Base::getY()
{
    return y;
}
void Base::MyFunction()
{
    cout << "Base Class" << endl;
}
void Base::display()
{
    cout << "X private = " << x << endl <<
    "Y public = " << y << endl << "r Protoected  = " << r << endl ;
}
int Base::productWZXR()
{
    return x*r;
}

Base::~Base()
{
    //dtor
}
