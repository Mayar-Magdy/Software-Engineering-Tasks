#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include <graphics.h>
class Line
{
  private:
        Point Start;
        Point End;
    public:
        Line();
        Line(int,int,int,int);
        Line(Point,Point);
        void Draw();
        ~Line();



};

#endif // LINE_H
