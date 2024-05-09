#include "MayarClass.h"
#include <iostream>
using namespace std;
template <class T>
MayarClass<T>::MayarClass()
{
    //ctor
}
template <class T>
void MayarClass<T>::display(T x)
{
    cout << x << endl;
}
template <class T>
MayarClass<T>::~MayarClass()
{
    //dtor
}
