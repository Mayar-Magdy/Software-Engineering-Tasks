#ifndef POINT_H
#define POINT_H
#include "Shape.h"


class Point : public Shape
{
   private:
        int x;
        int y;
    public:
        Point();
        Point(int);
        Point(int, int);
        Point(int, int , int);
        void setX(int);
        void setY(int);
        int getX();
        int getY();
    void Draw() override;
        ~Point();
};

#endif // POINT_H
