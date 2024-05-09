#include <iostream>
#include "calculator.h"
using namespace std;


template <class T>
Calculator<T> :: Calculator()
{
    num1 = 10;
    num2 = 20;
}


template <class T>
Calculator<T> :: Calculator(T n1, T n2)
{
    num1 = n1;
    num2 = n2;
}
template <class T>
void Calculator<T> :: displayResult()
{

    cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
    cout << num1 << " + " << num2 << " = " << add() << endl;
    cout << num1 << " - " << num2 << " = " << subtract() << endl;
    cout << num1 << " * " << num2 << " = " << multiply() << endl;
    cout << num1 << " / " << num2 << " = " << divide() << endl;

}
template <class T>
T Calculator<T> :: add()
{
    return num1 + num2;
}
template <class T>
T Calculator<T> :: subtract()
{
    return num1 - num2;
}
template <class T>
T Calculator<T> :: multiply()
{
    return num1 * num2;
}
template <class T>
T Calculator<T> :: divide()
{
    return num1 / num2;
}
