#include <iostream>
#include "GeoShape.h"
#include "Rectangle.h"
#include "square.h"
using namespace std;

int main()
{
    /* GeoShape = Parent Class
    GeoShape g1;
    GeoShape g2(5);
    GeoShape g3(2,4);
    g1.setDim1(10);
    cout << "Get Dim 1" << g1.getDim1() << endl;
    cout << "Get Dim 1" << g2.getDim1() << endl;
    cout << "Get Dim 1" << g3.getDim1() << endl;
    float x = g3.calcArea();
    cout << x << endl;*/

    Rectangle r1;
    cout << r1.calcArea() << endl;
    Rectangle r2(2,5);
    cout << r2.calcArea() << endl;

    square s1;
    s1.setDim(2);
    cout << s1.calcArea() << endl;
    square s2(4);
    cout << s2.calcArea() << endl;
    return 0;
}
