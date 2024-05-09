#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    real = img =0;
    cout << "Default constructor" << endl;
}

Complex::Complex(float val)
{
    real = img = val;
    cout << "One Paramterized constructor" << endl;
}

Complex::Complex(float _real, float _img)
{
    real = _real;
    img = _img;
    cout << "Two Paramterized constructor" << endl;
}

void Complex::setReal(float _real)
{
    real = _real;
}
float Complex::getReal()
{
    return real;
}
void Complex::setImg(float _img)
{
    img = _img;
}
float Complex::getImg()
{
    return img;
}
void Complex::printComplex()
{
    if(img>0)
        cout << this->real << "+" << img << "i" << endl;
    else
        cout << this->real << img << "i" << endl;
}

Complex Complex::operator+(Complex c2)
{
    Complex temp;
    temp.real = this->real + c2.real;
    temp.img = img + c2.img;
    return temp;
}
Complex Complex::operator-(Complex c2)
{
    Complex temp;
    temp.real = this->real - c2.real;
    temp.img = img - c2.img;
    return temp;
}

void Complex::operator++()
{
    this->real++;
    this->img++;
}
Complex Complex::operator++(int)
{
    this->real++;
    this->img++;
    return *this;
}

Complex Complex::operator=(Complex C)
{
    real = C.real;
    this->img = C.img;
    return *this;
}
bool Complex::operator==(Complex c)
{
    if(this->real == c.real && img == c.img)
        return true;
    else
        return false;
}
Complex Complex::operator+=(Complex c)
{
    real += c.real;
    this->img += c.img;
    return *this;
}
float Complex::operator[](char ch)
{
    if(ch=='r' || ch == 'R')
        return this->real;
    else if(ch=='i' || ch=='I')
        return this->img;
    else
        return -1;
}
Complex Complex::operator+(float x)
{
    Complex temp;
    temp.real = this->real + x;
    temp.img = img ;
    return temp;
}
Complex Complex::operator+=(float x)
{
    this->real += x;
    return *this;
}
Complex::~Complex()
{
    //dtor
}
