#include <iostream>
#include "headerFileTestOnly.h"
#include "ClassTemplate.h"
#include "./src/ClassTemplate.cpp"
using namespace std;
template <class T>
class FinalFinalHeader
{
    public:
        FinalFinalHeader() {}
        void display(T x)
        {
            cout << "Header Only : "<< x << endl;
        }
        ~FinalFinalHeader() {}

    protected:

    private:
};
int main()
{
    FinalFinalHeader<int> h1;
    h1.display(5);

    HeaderFileTest<float> h2;
    h2.display(100.34);

    ClassTemplate<char>h3;
    h3.display('A');
    return 0;
}
