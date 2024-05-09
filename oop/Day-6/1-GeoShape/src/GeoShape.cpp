#include "GeoShape.h"
#include <iostream>
using namespace std;
GeoShape::GeoShape()
{
    dim1= dim2 =0;
}
GeoShape::GeoShape(int l)
{
    dim1= dim2 = l;
}
GeoShape::GeoShape(int _dim1,int _dim2)
{
    dim1 = _dim1;
    dim2 = _dim2;
}
void GeoShape::setDim1(int _dim1)
{
    dim1 = _dim1;
}
int GeoShape::getDim1()
{
    return dim1;
}
void GeoShape::setDim2(int _dim2)
{
    dim2 = _dim2;
}
int GeoShape::getDim2()
{
    return dim2;
}
float GeoShape::calcArea()
{
    cout << "GeoShape Calculate Area function " << endl;
    return 0;
}

GeoShape::~GeoShape()
{
    cout << "Destructor GeoShape" << endl;
}
