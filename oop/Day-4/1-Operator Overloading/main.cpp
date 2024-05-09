#include <iostream>
#include "Complex.h"
#include "Point.h"
using namespace std;

int main()
{
    {// Test case one Constructor
        cout << "----------Constructors---------" << endl;
        Complex c1;
        Complex c2(1.2f);
        Complex c3(2.5f , 6.2f);
    }
    {// Test case two Setter & Getter
        cout << "----------Setter&Getter---------" << endl;
        Complex cSetGet;
        cSetGet.setReal(1.3f);
        cSetGet.setImg(9.2f);
        cout << "Get Real = " <<cSetGet.getReal() << endl;
        cout << "Get Img = "<<cSetGet.getImg() << endl;
    }
    {//Test case print
        cout << "----------Print---------" << endl;
        Complex cPrint(2.3f, 4.6f);
        cPrint.printComplex();
    }
    {//Test case operator+
        cout << "----------Operator + ---------" << endl;
        Complex C1(2.3f, 5.4f),C2(3.2f), sum;
        sum = C1 + C2; // sum = c1.addComplex(c2)
        sum.printComplex();
    }
    {//Test case operator+
        cout << "----------Operator - ---------" << endl;
        Complex C1(2.3f, 5.4f),C2(3.2f), sum;
        sum = C1 - C2; // sum = c1.subComplex(c2)
        sum.printComplex();
    }
    {//Test Case Operator prefix
        cout << "----------Operator prefix ++ ---------" << endl;
        Complex cPre(1.2f,3.2f);
        ++cPre;
        cPre.printComplex();
    }
    {//Test Case Operator prefix
        cout << "----------Operator postfix ++ ---------" << endl;
        Complex cPost(1.2f,3.2f);
        cPost++;
        cPost.printComplex();
    }
    {//Test Case Operator =
        cout << "----------Operator = ---------" << endl;
        Complex cEqual(1.2f,3.5f) , cEqual2(2.345f, 45.677f);
        cEqual.printComplex();
        cEqual2.printComplex();
        cEqual2 = cEqual;
        cEqual.printComplex();
        cEqual2.printComplex();
    }
    {//Test Case Operator ==
        cout << "----------Operator == ---------" << endl;
        Complex c1(2.2f, 3.2f) , c2(2.2f,3.2f);
        bool test = (c1 == c2);
        cout << test << endl;
    }
    {//Test Case Operator +=
        cout << "----------Operator += ---------" << endl;
        Complex c1(2.2f, 3.2f) , c2(2.2f,3.2f);
        c1 += c2;
        c1.printComplex();
    }
    {//Test Case Operator []
        cout << "----------Operator [] ---------" << endl;
        Complex cArray(3.4f, 2.4f);
        cout << cArray['t'] << endl;
    }
    {//Test Case Operator + float
        cout << "----------Operator + float ---------" << endl;
        Complex cWithFloat(2.3f , 4.5f);
        Complex sum = cWithFloat + 3.6f;
        sum.printComplex();
    }
    {//Test Case Operator += float
        cout << "----------Operator += float ---------" << endl;
        Complex cWithFloatPlusEqual(2.3f , 4.5f);
        cWithFloatPlusEqual+= 3.6f;
        cWithFloatPlusEqual.printComplex();
    }


    { // test case class point
        cout << "----------Class Point Operator + ---------" << endl;
        Point p1(6,3);
        Point p2(6,3);
        Point p3 = p1 + p2;
        p3.Print();
        bool test= (p1 >= p2);
        cout << "> = test case point : " << test << endl;
    }

    return 0;
}
