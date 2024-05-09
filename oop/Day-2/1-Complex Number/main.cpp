#include <iostream>

using namespace std;


class complexNumber
{
    private:
        // access modifier
        float real;
        float img;
    public:
        // constructor - Initialization
        complexNumber() : real(10.2), img(2.3)
        {
            //real =1;
            //img = 1;
            cout << "Default constructor" << endl;
        }

        complexNumber(float val): real(val), img(val)
        {
            //real = img = val;
            cout << "One Parameter constructor" << endl;
        }

        complexNumber(float value1, float value2) : real(value1), img(value2)
        {
            //real = value1;
            //img = value2;
            cout << "Two Parameter constructor" << endl;
        }

        // setter & Getter
        void setReal(float r)
        {
            real = r;
        }
        float getReal()
        {
            return real;
        }
        void setImg(float i)
        {
            img = i;
        }
        float getImg()
        {
            return img;
        }
        // functionality
        complexNumber addComplex(complexNumber c)
        {
            complexNumber sum;
            sum.real = this->real + c.real; // this
            sum.img = this->img + c.img;
            return sum;
        }
        complexNumber subComplex(complexNumber c)
        {
            complexNumber sub;
            sub.real = real - c.real;
            sub.img = img - c.img;
            return sub;
        }
        void printComplex()
        {
            if(img>0)
                cout << this->real << "+" << img << "i" << endl;
            else
                cout << real << img << "i" << endl;
        }
        //destructor
        ~complexNumber()
        {
            cout << "Destructor" << endl;
        }

};

int main()
{
    /*
    complexNumber c;
    c.setReal(2.3);
    cout << c.getReal() << endl;
    float imgMain;
    cout << "Enter Img Value : ";
    cin>> imgMain;
    c.setImg(imgMain);
    cout << c.getImg()<<endl;

    complexNumber c2,sum;
    sum = c2.addComplex(c);
    sum.printComplex();*/

    /*float value;
    complexNumber complex1, complex2, add, sub;
    int num;
    cout << "Enter Number Of Object For Complex Number : ";
    cin >> num;
    complexNumber arr[num] = {complex1, complex2};
    for(int i=0; i<num; i++)
    {
        cout << "Enter Real for Complex " << i+1 << " : ";
        cin >> value;
        arr[i].setReal(value);

        cout << "Enter Img for Complex " << i+1 << " : ";
        cin >> value;
        arr[i].setImg(value);
    }

    add = arr[0].addComplex(arr[1]);
    add.printComplex();

    sub = arr[0].subComplex(arr[1]);
    sub.printComplex();*/
    complexNumber cNew3;
    cNew3.printComplex();

    {
        complexNumber cNew(2.3, 5.6);// real=0 , img=0
        cNew.printComplex();
    }


    complexNumber cNew2(2.5);
    cNew2.printComplex();

    complexNumber sum = cNew2.addComplex(cNew3);
    sum.printComplex();

    return 0;
}
