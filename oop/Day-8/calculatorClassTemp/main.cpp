#include <iostream>
#include "calculator.h"
#include "calculator.cpp"
using namespace std;


int main()
{
    Calculator<int> intcalc (10,20);
    Calculator<float> floatCalc(2.4, 1.2);


    cout << "Int results:" << endl;
    intcalc.displayResult();

    cout << endl
         << "Float results:" << endl;
    floatCalc.displayResult();
    return 0;
}
