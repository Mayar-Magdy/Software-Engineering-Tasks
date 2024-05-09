#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
#include <graphics.h>

class Rect
{
    public:
        Rect();
        Rect(int,int,int,int);
        Rect(Point,Point);
        void Draw();
        ~Rect();

    protected:

    private:
        Point UL;
        Point LR;
};

#endif // RECTANGLE_H
