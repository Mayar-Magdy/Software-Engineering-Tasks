#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <graphics.h>
class Circle
{
 private:
        Point center;
        int raduis;
public:
        Circle();
        Circle(int,int,int);
        Circle(Point,int);
        void Draw();
        ~Circle();
};

#endif // CIRCLE_H
