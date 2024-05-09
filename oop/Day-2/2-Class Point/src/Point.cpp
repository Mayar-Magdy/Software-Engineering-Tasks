#include <iostream>
#include "Point.h"
using namespace std;
// :: scope resolution operator
Point::Point()
{
    x = y =0;
    cout << "Default Constructor" << endl;
}
Point::Point(int value)
{
    x = y= value;
    cout << "One Parameter Constructor" << endl;
}
Point::Point(int value1, int value2)
{
    x = value1;
    y = value2;
    cout << "Two Parameter Constructor" << endl;
}
void Point::setX(int xSetX)
{
    x = xSetX;
}
int Point::getX()
{
    return x;
}
void Point::setY(int _y)
{
    y = _y;
}
int Point::getY()
{
    return y;
}
void Point::printPoint()
{
    cout << "(" << x << " , " << y << ")" << endl;
}

Point::~Point()
{
    cout << "Destructor" << endl;
}
