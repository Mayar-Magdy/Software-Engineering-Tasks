#include <iostream>
using namespace std;
class Base // abstract class
{
    public:
        virtual void display()
        {
            cout << "In Base" << endl;
        }
        // pure virtual function
        virtual void myFunction() = 0;
};
class Dervied : public Base
{
    public:
        void display()
        {
            cout << "In Dervied" << endl;
        }
        void myFunction()
        {
            cout << "My Function in Dervied" << endl;
        }
};
int main()
{
    //Base b; // can not create object from abstract class
    Dervied d;
    d.myFunction();

    /*
    //early binding without virtual
    Base *base = new Dervied; // depend on pointer type
    base->display();*/

    //Late binding with virtual
    Base *base = new Dervied; // not depend on pointer type
    base->display();
    return 0;
}
