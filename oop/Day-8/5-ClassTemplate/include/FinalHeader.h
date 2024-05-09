#ifndef FINALHEADER_H_INCLUDED
#define FINALHEADER_H_INCLUDED

#include <iostream>
using namespace std;
template <class T>
class FinalHeader
{
    public:
        FinalHeader();
        void display(T x)
        {
            cout << "Final Header Header Only : "<< x << endl;
        }
        ~FinalHeader();

    protected:

    private:
};

#endif // FINALHEADER_H_INCLUDED
