#include "Circle.h"

Circle::Circle()
{
    raduis = 25;
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
    //  setcolor(9); //method 1 color border
    int border_color = WHITE;
     setfillstyle(SOLID_FILL, MAGENTA);  // method2 fill
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
