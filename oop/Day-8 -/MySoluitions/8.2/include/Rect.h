#ifndef RECT_H
#define RECT_H
#include "Point.h"
#include <graphics.h>
#include "Shape.h"


class Rect : public Shape
{
 private:
        Point P1;
        Point P2;
    public:
      Rect(int,int,int,int);
        Rect(int,int,int,int,int);
        Rect(Point,Point, int);
        Rect(Point,Point);
    void Draw() override;
        ~Rect();

};


#endif // RECT_H
