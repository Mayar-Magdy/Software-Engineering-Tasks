#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <graphics.h>
#include "Shape.h"

class Circle : public Shape
{
private:
    Point center;
    int raduis;
public:
    Circle();
    Circle(int,int,int,int);
    Circle(int,int,int);
    Circle(Point,int);

    Circle(Point,int,int);
    void Draw() override;
    ~Circle();
};

#endif // CIRCLE_H
