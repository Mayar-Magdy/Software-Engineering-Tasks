/*#include <iostream>
using namespace std;
class Employee
{
private :
    static int cnt ;
public:
    long long ID;
    string Name;
    int Salary;
    int ur_num;


    void full( long long ID_C,
               string Name_C
               ,int Salary_C)
    {
        ID=ID_C;
        Name= Name_C;
        Salary=Salary_C;
        cnt++;
        ur_num=cnt;

    }
    void i_data()
    {
        cout<<"Enter ur id : " ;
        cin>>ID;
        cout<<"Enter ur Name : " ;
        cin>>Name;
        cout<<"Enter ur Salary : " ;
        cin>>Salary;
        cout<<"thnx :) \n";
        cnt++;
        ur_num=cnt;

    }
    void print_data()
    {
        cout<<"Employee number : "<<ur_num<<"\n";
        cout<<"id : "<<ID <<"\n";
        cout<<"name :"<<Name <<"\n";
        cout<<"salary : "<<Salary<<"\n";
    }

};
int Employee::cnt = 0;
int main()
{
    int sz;
    cout<<"Enter the nuber of Employees : ";
    cin>>sz;
    Employee *num = new Employee[sz];
    for(int i=0 ; i<sz ; ++i)
    {
        num[i].i_data();
    }
    cout<<"\n";
    for(int i=0 ; i<sz ; ++i)
    {
        num[i].print_data();
        cout<<"\n";
    }




    return 0;
}
*/
