#include <iostream>
#include"Base.h"
#include "Dervied.h"
using namespace std;

int main()
{
    Base b1(1,2,3);
    b1.display();
    //b1.x = 10 // error x private
    b1.setX(10) ;
    //b1.r = 20; // error x protected
    b1.setR(20);
    b1.y = 30;
    b1.display();


    Dervied d1(1,2,3,4,5); //int _w,int _z,int p,int m,int n
    //d1.x = 10;// error x private
    //d1.r = 20;// error x protected can use in the Dervied Class
    cout << endl <<endl;
    cout << "Y dervied = " <<d1.y <<endl;
    cout << "Y Base = " <<d1.Base::y ;
    cout << endl <<endl;
    d1.MyFunction();
    d1.Base::MyFunction();
    cout << endl;
    cout << d1.productWZXR()<<endl; // w=1, z=2, x=3, r=5
    cout << d1.Base::productWZXR() << endl;
    return 0;
}
