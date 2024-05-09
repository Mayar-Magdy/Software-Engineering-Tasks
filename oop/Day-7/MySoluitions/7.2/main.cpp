#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "Picture.h"
int main()
{
    initwindow(800,600);
    Picture pic;
    Rect Rect_Arr[2] = {Rect(18,18,90,86) , Rect(152,102,370,180)};
    pic.setRectangles(2,Rect_Arr);
    Circle Cir_Arr[3] = {Circle(660,110,100), Circle(579 ,280,50) ,Circle(593,419, 25) };
    pic.setCicles(3,Cir_Arr);

   Line Line_Arr[3] = {Line(10,320,330,320),Line(10,360,290,360), Line(10,400,270,400)};
    pic.setLines(3,Line_Arr);

    pic.paint();
    getch();
    closegraph();
    return 0;
}
