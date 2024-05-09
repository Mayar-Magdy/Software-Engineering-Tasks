#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include <graphics.h>
#include "Shape.h"

class Line : public Shape
{
  private:
        Point Start;
        Point End;
    public:
        Line();
        Line(int,int,int,int);
        Line(int,int,int,int,int);
        Line(Point,Point);
        Line(Point,Point,int);

    void Draw() override;
        ~Line();
};

#endif // LINE_H
