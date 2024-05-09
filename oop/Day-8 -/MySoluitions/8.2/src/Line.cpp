#include "Line.h"
Line::Line():Shape(15)
{
}
Line::Line(int x1,int y1,int x2,int y2 ,int c):Start(x1,y1), End(x2,y2) ,Shape(c)
{
}
Line::Line(int x1,int y1,int x2,int y2 ):Start(x1,y1), End(x2,y2) ,Shape(15)
{
}
Line::Line(Point p1,Point p2,int c) : Shape(c)
{
    Start.setX(p1.getX());
    Start.setY(p1.getY());
    End.setX(p2.getX());
    End.setY(p2.getY());
}
Line::Line(Point p1,Point p2) : Shape(15)
{
    Start.setX(p1.getX());
    Start.setY(p1.getY());
    End.setX(p2.getX());
    End.setY(p2.getY());
}
void Line::Draw()
{
       setcolor(Shape::getColor());
       setlinestyle (SOLID_LINE, 0, THICK_WIDTH);
      line(Start.getX(),Start.getY(),End.getX(),End.getY());

}

Line::~Line()
{
    //dtor
}
