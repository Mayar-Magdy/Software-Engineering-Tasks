#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
using namespace std;

class Doctor
{
    private:
        string name;
    public:
        Doctor();
        Doctor(string);
        void setName(string);
        string getName();
        void print();
        ~Doctor();
};

#endif // DOCTOR_H
