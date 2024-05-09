#include "Line.h"

Line::Line()
{
    //ctor
}
Line::Line(int x1,int y1,int x2,int y2):Start(x1,y1), End(x2,y2)
{
}
Line::Line(Point p1,Point p2)
{
    Start.setX(p1.getX());
    Start.setY(p1.getY());
    End.setX(p2.getX());
    End.setY(p2.getY());
}
void Line::Draw()
{
    line(Start.getX(),Start.getY(),End.getX(),End.getY());
}

Line::~Line()
{
    //dtor
}
