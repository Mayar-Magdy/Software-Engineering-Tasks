#include "Point.h"
#include <iostream>
using namespace std;
Point::Point()
{
    x= y= 0;
}
Point::Point(int _x, int _y)
{
    x = _x;
    y = _y;
}
void Point::Print()
{
    cout << "(" << x << " , "<< y << ")" << endl;
}

Point Point::operator+(Point p)
{
    Point temp;
    temp.x = x + p.x;
    temp.y = y + p.y;
    return temp;
}
bool Point::operator>=(Point p)
{
    if(x >= p.x && y >= p.y)
        return true;
    else
        return false;
}

Point::~Point()
{
    //dtor
}
