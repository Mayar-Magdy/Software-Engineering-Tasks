#include <iostream>
#include "MayarClass.h"
#include "MayarClass.cpp"

#include "FinalFinalHeader.h"
using namespace std;
template<class T>
class Test
{
    T x;
    T y;
    public:
        Test(T _x, T _y)
        {
            x = _x;
            y = _y;
        }
        void display()
        {
            cout << x << " , " << y << endl;
        }
};
int main()
{
    Test<string>t1("Ahmed", "Asmaa");
    t1.display();

    Test<int>t2(25,30);
    t2.display();


    MayarClass<int> m1;
    m1.display(2);

    FinalFinalHeader<int> h1;
    h1.display(3);

    return 0;
}
