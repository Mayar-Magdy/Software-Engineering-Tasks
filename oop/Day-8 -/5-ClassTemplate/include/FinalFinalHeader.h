#ifndef FINALFINALHEADER_H_INCLUDED
#define FINALFINALHEADER_H_INCLUDED


#include <iostream>
using namespace std;
template <class T>
class FinalFinalHeader
{
    public:
        FinalFinalHeader();
        void display(T x)
        {
            cout << "Header Only : "<< x << endl;
        }
        ~FinalFinalHeader();

    protected:

    private:
};


#endif // FINALFINALHEADER_H_INCLUDED
