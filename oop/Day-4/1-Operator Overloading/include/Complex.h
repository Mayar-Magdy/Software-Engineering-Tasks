#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    private:
        float real;
        float img;
    public:
        Complex();
        Complex(float);
        Complex(float, float);
        void setReal(float);
        float getReal();
        void setImg(float);
        float getImg();
        void printComplex();
        // operator overloading  ->   C1 + C2 = C3
        Complex operator+(Complex);
        Complex operator-(Complex);
        void operator++(); //prefix
        Complex operator++(int); // postfix

        Complex operator=(Complex);
        bool operator==(Complex);
        Complex operator+=(Complex);

        float operator[](char);
        Complex operator+(float);
        Complex operator+=(float);



        ~Complex();

};

#endif // COMPLEX_H
