#include "square.h"
#include <iostream>
using namespace std;
square::square()
{
    //ctor
}
square::square(int a):GeoShape(a)
{

}
void square::setDim(int l)
{
    setDim1(l);
    setDim2(l);
}
float square::calcArea()
{
    return dim1*dim2;
}

square::~square()
{
    cout << "Destructor Square" << endl;
}
