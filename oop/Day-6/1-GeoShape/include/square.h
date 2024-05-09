#ifndef SQUARE_H
#define SQUARE_H
#include "GeoShape.h"

class square : private GeoShape
{
    public:
        square();
        square(int);
        float calcArea();
        void setDim(int);
        ~square();

    protected:

    private:
};

#endif // SQUARE_H
