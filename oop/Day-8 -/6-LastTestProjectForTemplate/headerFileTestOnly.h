#ifndef HEADERFILETESTONLY_H_INCLUDED
#define HEADERFILETESTONLY_H_INCLUDED

#include <iostream>

using namespace std;
template <class T>
class HeaderFileTest
{
    public:
        HeaderFileTest() {}
        void display(T x)
        {
            cout << "Header File Test Only : "<< x << endl;
        }
        ~HeaderFileTest() {}

    protected:

    private:
};

#endif // HEADERFILETESTONLY_H_INCLUDED
