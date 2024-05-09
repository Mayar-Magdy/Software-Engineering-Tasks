#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
using namespace std;

int main()
{
///first i want clear how to use graphics.h func
    /*
      if u want to draw a point
      u just need to write its coordinate
      putpixel (x,y);
      putpixel (x,y,color);

    */
    /*  if u want to draw a rectangle
        rectangle(left, top, right, bottom);
        so here we draw a square with a length of 200 pixels and a width of 200 pixels
         rectangle(200, 200, 400, 400);
    */

    /* line(start point , end point)
      line (150, 150, 450, 150);
    */
    /*To draw a circle, you need to use the circle ()
     This function takes  x, y, and radius
     circle(X,Y,radius);
    */
/// finally  i will use the paint to detec my coordinates.


    initwindow(800,800);

    Point p1(200,200);
    Point p2(400,400);
    Point p3(38,14);
    Point p4(160,83);
    Point a[7] = {{686,464},{692,466},{699,468},{706,467},{710,464},{691,450},{699,450}};
    for(int i=0; i<7; ++i)
    {
        a[i].Draw();
    }

    Line l1(20,30,150,100), l2(p3, p4) ;
    l1.Draw();
    l2.Draw();

    Rect r1(p1,p2);
    r1.Draw();

    Point center(500,500);
    Circle c1(center, 100);
    c1.Draw();

    getch();
    closegraph();
    return 0;
}
