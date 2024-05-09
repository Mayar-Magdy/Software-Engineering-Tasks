#include <iostream>

using namespace std;
class complexNumber
{
    // Encapsulation - Data hiding
    public: // access modifier (private)
        float real;
        float img;
        complexNumber addComplex(complexNumber Second)
        {
            complexNumber sum;
            sum.real = real + Second.real;
            sum.img = img  + Second.img;
            return sum;
        }
        void printComplex()
        {
            if(img>=0)
                cout << real << "+" << img << "i" << endl;
            else
                cout << real << img << "i" << endl;
        }
        complexNumber subComplex(complexNumber Second)
        {
            complexNumber sub;
            sub.real = real - Second.real;
            sub.img = img  - Second.img;
            return sub;
        }
};
int main()
{
    complexNumber c1;
    c1.real = 1.2;
    c1.img = 2.3;
    c1.printComplex();

    complexNumber c2;
    c2.real = 1.4;
    c2.img = 2.7;
    c2.printComplex();


    complexNumber add = c1.addComplex(c2);
    add.printComplex();

    complexNumber sub = c1.subComplex(c2);
    sub.printComplex();
    return 0;
}
