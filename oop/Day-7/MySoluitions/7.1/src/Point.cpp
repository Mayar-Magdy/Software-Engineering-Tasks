#include "Point.h"
#include <graphics.h>

Point::Point()
{
    x =0;
    y= 0;
}

Point::Point(int l)
{
    x= 1;
    y= l;
}
Point::Point(int _x, int _y)
{
    x = _x;
    y = _y;
}
void Point::setX(int _x)
{
    x = _x;
}
void Point::setY(int _y)
{
    y = _y;
}
int Point::getX()
{
    return x;
}
int Point::getY()
{
    return y;
}
void Point:: Draw(){
 putpixel (x, y, 15);
}

Point::~Point()
{
    //dtor
}
