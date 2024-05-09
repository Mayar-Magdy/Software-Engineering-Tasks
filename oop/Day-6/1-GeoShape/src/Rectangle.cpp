#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle()
{
    //ctor
}
Rectangle::Rectangle(int a,int b): GeoShape(a,b)
{
    /*
    setDim1(a);
    setDim2(b);*/
}
float Rectangle::calcArea()
{
    return dim1*dim2;
}

Rectangle::~Rectangle()
{
    cout << "Destructor Rectangle"<<endl;
}
