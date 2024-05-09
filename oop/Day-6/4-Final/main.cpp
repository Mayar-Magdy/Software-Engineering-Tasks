#include <iostream>

using namespace std;
class Base
{
    public:
        virtual void myFun() final
        {
            cout << "In Base" << endl;
        }
};

class Dervied : public Base{
    public:

};
int main()
{
    Dervied d;
    Base &b = d;
    b.myFun();
    return 0;
}
