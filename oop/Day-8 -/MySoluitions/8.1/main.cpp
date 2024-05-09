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
    Rect Rect_Arr[3] = {Rect(18,18,90,86,4) , Rect(152,102,370,180,4), Rect (275 , 268, 381 , 311)};
    Rect_Arr[2].setColor(9);
    pic.setRectangles(3,Rect_Arr);
    Circle Cir_Arr[3] = {Circle(660,110,100,8), Circle(579 ,280,50,7) ,Circle(593,419, 25,15) };
    pic.setCicles(3,Cir_Arr);

    Line Line_Arr[3] = {Line(10,320,330,320,5),Line(10,360,290,360,3), Line(10,400,270,400,2)};
    pic.setLines(3,Line_Arr);

    pic.paint();
    getch();
    closegraph();
    return 0;
}
