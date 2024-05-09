/*#include <iostream>
using namespace std;
struct Employee
{
    static int cnt ;
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

};
void print_data(Employee n){
    cout<<"Employee number : "<<n.ur_num<<"\n";
    cout<<"id : "<<n.ID <<"\n";
    cout<<"name :"<<n.Name <<"\n";
    cout<<"salary : "<<n.Salary<<"\n";
}

int Employee::cnt = 0;
int main()
{
   // Employee n1;
    //n1.full(11, "mai" ,30000);
   // print_data(n1);
    int sz;
    cout<<"Enter the nuber of Employees : ";
    cin>>sz;
    Employee *num = new Employee[sz];

   /* for(int i=0 ; i<sz ;++i){
            cout<<"Enter ur id : " ;
            cin>>num[i].ID;
            cout<<"Enter ur Name : " ;
            cin>>num[i].Name;
            cout<<"Enter ur Salary : " ;
            cin>>num[i].Salary;
            num[i].full(num[i].ID ,num[i].Name,num[i].Salary );
    }

    for(int i=0 ; i<sz ;++i){
          num[i].i_data();
    }
    cout<<"\n";
       for(int i=0 ; i<sz ;++i){
            print_data(num[i]);
            cout<<"\n";
    }


    return 0;
}
*/
