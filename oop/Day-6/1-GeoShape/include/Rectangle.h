#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeoShape.h"

class Rectangle : public GeoShape
{
    public:
        Rectangle();
        Rectangle(int,int);
        float calcArea();
        ~Rectangle();

    protected:

    private:
        int recVar;
};

#endif // RECTANGLE_H
