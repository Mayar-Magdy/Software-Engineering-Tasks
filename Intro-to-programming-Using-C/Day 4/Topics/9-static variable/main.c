#include <stdio.h>

void display();
void addEmployee();
int main()
{
    display();
    display();
    addEmployee();
    addEmployee();
    addEmployee();
    return 0;
}
void display()
{
    static int c = 1;
    c-=5;
    printf("C = %d\n",c);
}
void addEmployee()
{
    static int id=0;
    id++;
    printf("ID = %d\n",id);
}
