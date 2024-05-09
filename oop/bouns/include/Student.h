#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"
#include<iostream>
using namespace std;

class Student:public Person
{
    private:
    double gpa;
   static int general_Id;
    public:
        Student();
        Student(string ,string,string,double);
        void setGpa(double);
        double getGpa();
        void display();
        void modifiyEmail(string);
        void changPassword(string);
        ~Student();


};

#endif // STUDENT_H
