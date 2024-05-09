#ifndef _CALCULATOR_H__
#define _CALCULATOR_H__

#include <iostream>

using namespace std;

template <class T>
class Calculator {
   private:
    T num1, num2;

   public:
    Calculator();
    Calculator(T n1, T n2);
    void displayResult() ;

    T add();
    T subtract();
    T multiply();
    T divide();

};
#endif // _CALCULATOR_H__
