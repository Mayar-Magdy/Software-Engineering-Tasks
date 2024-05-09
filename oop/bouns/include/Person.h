#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{
    private:
        int id;
        string email;
        string password;
        string name;
    public:
        Person();
        //Person(string _name ,string _email,string _password)
        virtual void display()=0;
        void setName(string);
        string getName();
        void setId(int);
        int getId();
        void setMail(string);
        void setPassword(string);
        virtual void modifiyEmail(string)=0;
        virtual void changPassword(string)=0;
        ~Person();


};

#endif // PERSON_H
