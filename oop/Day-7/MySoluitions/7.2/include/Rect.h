#ifndef RECT_H
#define RECT_H
#include "Point.h"
#include <graphics.h>

class Rect
{
 private:
        Point P1;
        Point P2;
    public:
        Rect();
        Rect(int,int,int,int);
        Rect(Point,Point);
        void Draw();
        ~Rect();

};


#endif // RECT_H
