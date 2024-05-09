#include "functionOverload.h"
#include <iostream>
using namespace std;
functionOverload::functionOverload()
{
    cout << "Constructor" << endl;
}
void functionOverload::print(int x)
{
    cout << "Print int x = " << x << endl;
}
void functionOverload::print(char* x)
{
    cout << "Print string x = " << x << endl;
}
void functionOverload::print(int x, int y)
{
    cout << "Print int x,y = " << x << " , " << y << endl;
}
void functionOverload::print(float x, float y)
{
    cout << "Print float x,y = " << x << " , " << y << endl;
}
void functionOverload::print(float x, int y)
{
    cout << "Print float x, int y = " << x << " , " << y << endl;
}

void functionOverload::print(int x, float y)
{
    cout << "Print int x, float y = " << x << " , " << y << endl;
}

functionOverload::~functionOverload()
{
    cout << "Destructor" << endl;
}
