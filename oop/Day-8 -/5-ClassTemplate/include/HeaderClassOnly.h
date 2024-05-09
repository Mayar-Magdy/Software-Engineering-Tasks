#ifndef HEADERCLASSONLY_H
#define HEADERCLASSONLY_H
#include <iostream>
using namespace std;
template <class T>
class HeaderClassOnly
{
    public:
        HeaderClassOnly();
        void display(T x)
        {
            cout << "Header Only : "<< x << endl;
        }
        ~HeaderClassOnly();

    protected:

    private:
};

#endif // HEADERCLASSONLY_H
