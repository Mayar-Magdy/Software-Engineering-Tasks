#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <graphics.h>
class Circle
{
    public:
        Circle();
        Circle(int,int,int);
        Circle(Point,int);
        void Draw();
        ~Circle();

    protected:

    private:
        Point center;
        int raduis;
};

#endif // CIRCLE_H
