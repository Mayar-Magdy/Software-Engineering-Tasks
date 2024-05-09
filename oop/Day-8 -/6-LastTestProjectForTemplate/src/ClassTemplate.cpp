#include "ClassTemplate.h"
#include <iostream>
using namespace std;
template <class T>
ClassTemplate<T>::ClassTemplate()
{
    //ctor
}
template <class T>
void ClassTemplate<T>::display(T x)
{
    cout << "Template Class : " << x << endl;
}
template <class T>
ClassTemplate<T>::~ClassTemplate()
{
    //dtor
}
