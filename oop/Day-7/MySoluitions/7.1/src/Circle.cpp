#include "Circle.h"
Circle::Circle()
{
    raduis = 50;
}
Circle::Circle(int x,int y,int r):center(x,y)
{
    raduis = r;
}
Circle::Circle(Point _center,int r)
{
    center.setX(_center.getX());
    center.setY(_center.getY());
    raduis =r;
}
void Circle::Draw()
{
    circle(center.getX(), center.getY(), raduis);
}

Circle::~Circle()
{
    //dtor
}
