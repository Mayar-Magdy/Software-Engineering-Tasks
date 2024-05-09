#include "Point.h"
#include <graphics.h>

Point::Point(): Shape(15)
{
    x =0;
    y= 0;
}

Point::Point(int l): Shape(15)
{
    x= 1;
    y= l;
}
Point::Point(int _x, int _y): Shape(15)
{
    x = _x;
    y = _y;
}
Point::Point(int _x, int _y, int c) : Shape(c)
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
 putpixel (x, y, Shape::getColor());
}

Point::~Point()
{
    //dtor
}
