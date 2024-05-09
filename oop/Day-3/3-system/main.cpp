#include <iostream>
#include "Doctor.h"
using namespace std;

int main()
{
    {// testing for function ...
        Doctor d1;
        d1.print();
        Doctor d2("Ali");
        d2.print();

        d2.setName("Moahmed");
        cout << d2.getName() << endl;
        d2.print();
    }
    {// testing for function ...

    }
    return 0;
}
