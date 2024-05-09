#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include <graphics.h>
class Line
{
    public:
        Line();
        Line(int,int,int,int);
        Line(Point,Point);
        void Draw();
        ~Line();

    protected:

    private:
        Point Start; // composition
        Point End;
};

#endif // LINE_H
