#include "Student.h"

Student::Student():Person()
{
   gpa=0;
   general_Id+=1;
   setId(general_Id + 500);
}
Student::Student(string _name,string _email,string _password,double _gpa)
{
   gpa=_gpa;
   setName(_name);
   modifiyEmail(_email);
   changPassword(_password);
   general_Id+=1;
   setId(general_Id + 500);


}
void Student::setGpa(double _gpa)
{
  gpa=_gpa;

}
double Student::getGpa()
{
  return gpa;
}
void Student::display()
{
   Person::display();
   cout<<"gpa : "<<gpa<<endl;
}
void Student::modifiyEmail(string _email)
{
    int befor=0;
    int t=0;
    while(_email[t]!='@')
    {
        befor+=1;
        t++;
    }
    string email2=_email;
    _email.erase(0,t);

    if(befor >=1 && _email=="@school.com")
    {
        cout<<"Email modified successfully"<<endl;
        setMail(email2);
    }
    else
        cout<<"invalid email"<<endl;

}
void Student::changPassword(string _password)
{
    int numberOfCharacters=0;
    int numberOfSpecialCharacters=0;
    int numbers=0;
    for(int i=0; i<_password.length(); i++)

    {
        if(_password[i]>='0' && _password[i]<='9')
            numbers+=1;
        else if((_password[i]>='a' && _password[i]<='z') || (_password[i]>='A' && _password[i]<='Z'))
            numberOfCharacters+=1;
        else if(_password[i]=='_' || _password [i] =='@')
            numberOfSpecialCharacters+=1;
    }
    if(numbers>=2 && numberOfCharacters >=4 && numberOfSpecialCharacters ==1)
    {
        setPassword(_password);
        cout<<"Password modified successfully"<<endl;

    }
    else
        cout<<"invalid password"<<endl;


}

Student::~Student()
{
    //dtor
}
