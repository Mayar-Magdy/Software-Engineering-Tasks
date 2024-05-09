#ifndef PICTURE_H
#define PICTURE_H
#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"

class Picture
{
private:
     Shape** shapePtr;
     int shapeNum;
    public:
        Picture();
        Picture(int, Shape**);
        void paint();

};

#endif // PICTURE_H
