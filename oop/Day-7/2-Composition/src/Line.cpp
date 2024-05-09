#include "Line.h"

Line::Line()
{
    //ctor
}
Line::Line(int w,int m,int n,int z):Start(w,m), End(n,z)
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
    line(Start.getX(), Start.getY(), End.getX(), End.getY());
}

Line::~Line()
{
    //dtor
}
