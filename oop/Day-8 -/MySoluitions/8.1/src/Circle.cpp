#include "Circle.h"
Circle::Circle():Shape(0)
{
    raduis = 25;
}
Circle::Circle(int x,int y,int r , int c):center(x,y) , Shape(c)
{
    raduis = r;
}
Circle::Circle(int x,int y,int r ):center(x,y) , Shape(15)
{
    raduis = r;
}
Circle::Circle(Point _center,int r , int c) :Shape(c)
{
    center.setX(_center.getX());
    center.setY(_center.getY());
    raduis =r;
}
Circle::Circle(Point _center,int r ) :Shape(15)
{
    center.setX(_center.getX());
    center.setY(_center.getY());
    raduis =r;
}
void Circle::Draw()
{
    //  setcolor(9); //method 1 color border
     int border_color = WHITE;
     setfillstyle(SOLID_FILL, Shape::getColor());  // method2 fill
    //setfillstyle(INTERLEAVE_FILL, MAGENTA);
    //setfillstyle(XHATCH_FILL, BLUE);
    //setfillstyle(LINE_FILL, YELLOW);
    circle(center.getX(), center.getY(), raduis);
    floodfill(center.getX(), center.getY(), border_color);
}

Circle::~Circle()
{
    //dtor
}
