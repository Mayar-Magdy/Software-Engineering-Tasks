#ifndef PICTURE_H
#define PICTURE_H
#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"

class Picture
{
private:
        Circle* cirPtr;
        Rect* RecPtr;
        Line* LinePtr;
        int CirNum;
        int RectNum;
        int LineNum;
    public:
        Picture();
        Picture(int,int,int,Circle*, Rect*, Line*);
        void setCicles(int , Circle*);
        void setRectangles(int , Rect*);
        void setLines(int, Line*);
        void paint();

};

#endif // PICTURE_H
