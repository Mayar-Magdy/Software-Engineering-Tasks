#include <iostream>

using namespace std;
// struct => variables + functions

struct ComplexNumber
{
    float real=1;
    float img=0;
    // member function
    void test()
    {
        cout << "Test" << endl;
    }
};

// standalone function
ComplexNumber addComplex(ComplexNumber First, ComplexNumber Second)
{
    ComplexNumber sum; // object
    sum.real = First.real + Second.real;
    sum.img = First.img + Second.img;
    return sum;
}

// standalone function
ComplexNumber subComplex(ComplexNumber First, ComplexNumber Second)
{
    ComplexNumber sub; // object
    sub.real = First.real - Second.real;
    sub.img = First.img - Second.img;
    return sub;
}
// standalone function
void printComplex(ComplexNumber c)
{
    if(c.img>= 0)
        cout << c.real << "+" << c.img << "i" << endl;
    else
        cout << c.real << c.img << "i" << endl;
}

int main()
{
    ComplexNumber complex1, complex2, add, sub;
    cout << "Enter Real Part for first complex 1 : ";
    cin >> complex1.real;
    cout << "Enter Img Part for first complex 1 : ";
    cin >> complex1.img;

    cout << "Enter Real Part for first complex 2 : ";
    cin >> complex2.real;
    cout << "Enter Img Part for first complex 2 : ";
    cin >> complex2.img;

    add = addComplex(complex1,complex2);
    printComplex(add);

    sub = subComplex(complex1, complex2);
    printComplex(sub);


    ComplexNumber testComplex;
    testComplex.test();
    //test();
    return 0;
}
