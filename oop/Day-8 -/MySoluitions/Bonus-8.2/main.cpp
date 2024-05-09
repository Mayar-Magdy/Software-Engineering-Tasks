#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    string address;
    string phone;
    string email;
public:
    Person() {}
    Person(string name, string address, string phone, string email)
    {
        this->name = name;
        this->address = address;
        this->phone = phone;
        this->email = email;
    }
    virtual void display_data()=0;
};
class Student : public Person
{
private:
    double gpa;
public:
    Student() {}
    Student(string name, string address, string phone, string email, double _gpa) : Person(name, address, phone, email)
    {
        this->gpa = _gpa;
    }
    double getgpa()
    {
        return gpa;
    }
    void setgpa(double _gpa)
    {
        this->gpa = _gpa;
    }
    void display_data()
    {
        cout<< "address : "<<address<<"\n";
        cout<<" phone : " <<phone <<"\n";
        cout<<" email : "<<email<<"\n";
        cout<<"name : "<<name<<"\n";
        cout<<"gpa :"<<gpa<<"\n";
    }
};
class Employee : public Person
{
private:
    double salary;
public:
    Employee() {}
    Employee(string name, string address, string phone, string email, double salary) : Person(name, address, phone, email)
    {
        this->salary = salary;
    }
    double getSalary()
    {
        return salary;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    void display_data()
    {
        cout<< "address : "<<address<<"\n";
        cout<<" phone : " <<phone <<"\n";
        cout<<" email : "<<email<<"\n";
        cout<<"name : "<<name<<"\n";
        cout<<"salary : "<<salary<<"\n";
    }
};
class Department
{
private:
    string name;
    Person **a;
    Student *s;
    Employee *e;
    int size;
    int Student_num;
    int Employee_num;


public:
    Department(string name,  Person **a, int size)
    {
        this->name = name;
        this->a = a;
        this->size = size;
        s = new Student[size];
        e = new Employee[size];
        Student_num=0;
        Employee_num=0;
        for (int i = 0; i < size; i++)
        {
            Student* st = dynamic_cast<Student*>(a[i]);
            if (st != nullptr)
            {
                s[Student_num++] = *st;

            }
            else
            {
                Employee* em = dynamic_cast<Employee*>(a[i]);
                if (em != nullptr)
                {
                    e[Employee_num++] = *em;
                }
            }
        }
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void display()
    {
        for(int i=0 ; i<size; ++i)
        {
            a[i]->display_data();
        }
        cout<<"\n\n";
    }
    void display_Student()
    {
        for (int i = 0; i < Student_num; i++)
        {
            s[i].display_data();
            cout<<"\n\n";

        }
    }
    void display_Employee()
    {
        for (int i = 0; i < Employee_num; i++)
        {
            e[i].display_data();
            cout<<"\n\n";

        }
    }
};

int main()
{
    Student* s1[3]  = {new Student("mayar", "123 mohamed Street", "551234", "mayar@gmail.com", 3.5), new Student("mai", "123 Street", "5771234", "mai@gmail.com", 2.5), new Student("nora", "123 jo Street", "5791234", "nora@gmail.com", 3.1)};
    Employee* e1[3] = {new Employee("ali", "456 el msla", "5585678", "ali@gmail.com", 50000), new Employee("amr", "kareem street", "54678", "amr@gmail.com", 90000), new Employee("reem", "saad street", "445678", "reem@gmail.com", 3000)};
    int i=0;
    Person* sh[6];

    for(; i<3; ++i)
    {
        sh[i]=s1[i];
    }
    for(int j=0; i<6; ++i,++j)
    {
        sh[i]=e1[j];
    }


    Department d("Computer Science", sh,6);
    cout<<"------------------All data in Department--------------------------- \n";
    d.display();

    cout<<"------------------All Student in Department--------------------------- \n";
    d.display_Student();

    cout<<"------------------All Employee in Department---------------------------  \n";
    d.display_Employee();

    return 0;
}
