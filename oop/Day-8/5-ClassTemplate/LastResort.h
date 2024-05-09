
#include <iostream>
using namespace std;
template <class T>
class HeaderClassOnlyTest
{
    public:
        HeaderClassOnlyTest();
        void display(T x)
        {
            cout << "Header Only : "<< x << endl;
        }
        ~HeaderClassOnlyTest();

    protected:

    private:
};
