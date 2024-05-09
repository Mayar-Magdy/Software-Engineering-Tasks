#include "Rect.h"
Rect::Rect(int x1,int y1,int x2,int y2 , int _c) : P1(x1,y1), P2(x2,y2) , Shape(_c)
{

}
Rect::Rect(int x1,int y1,int x2,int y2 ) : P1(x1,y1), P2(x2,y2) , Shape(15)
{

}
Rect::Rect(Point p1,Point p2, int _c) :Shape(_c)
{
    P1.setX(p1.getX());
    P1.setY(p1.getY());

    P2.setX(p2.getX());
    P2.setY(p2.getY());
}
Rect::Rect(Point p1,Point p2) :Shape(15)
{
    P1.setX(p1.getX());
    P1.setY(p1.getY());

    P2.setX(p2.getX());
    P2.setY(p2.getY());
}
void Rect::Draw()
{
    setfillstyle(XHATCH_FILL, Shape::getColor());
    rectangle(P1.getX(), P1.getY(), P2.getX(), P2.getY());
     int x_center = (P1.getX() + P2.getX()) / 2;
    int y_center = (P1.getY() + P2.getY()) / 2;
    int border_color = WHITE;
    floodfill(x_center, y_center, border_color);}

Rect::~Rect()
{
    //dtor
}
