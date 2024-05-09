#include "Rectangle.h"

Rect::Rect()
{
    //ctor
}
Rect::Rect(int x1,int y1,int x2,int y2) : UL(x1,y1), LR(x2,y2)
{

}
Rect::Rect(Point p1,Point p2)
{
    UL.setX(p1.getX());
    UL.setY(p1.getY());

    LR.setX(p2.getX());
    LR.setY(p2.getY());
}
void Rect::Draw()
{
    rectangle(UL.getX(), UL.getY(), LR.getX(), LR.getY());
}

Rect::~Rect()
{
    //dtor
}
