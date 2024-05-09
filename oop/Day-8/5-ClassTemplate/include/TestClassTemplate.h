#ifndef TESTCLASSTEMPLATE_H
#define TESTCLASSTEMPLATE_H
#include <iostream>
using namespace std;
template<class T>
class TestClassTemplate
{
    public:
        TestClassTemplate();
        void displayX(T x);
        ~TestClassTemplate();

    protected:

    private:
        T x;
};

#endif // TESTCLASSTEMPLATE_H
