#include "Rect.h"

Rect::Rect()
{
    //ctor
}
Rect::Rect(int x1,int y1,int x2,int y2) : P1(x1,y1), P2(x2,y2)
{

}
Rect::Rect(Point p1,Point p2)
{
    P1.setX(p1.getX());
    P1.setY(p1.getY());

    P2.setX(p2.getX());
    P2.setY(p2.getY());
}
void Rect::Draw()
{
    rectangle(P1.getX(), P1.getY(), P2.getX(), P2.getY());
}

Rect::~Rect()
{
    //dtor
}
