#include <stdio.h>
// prototypes
int addtwoNumbers(int n1,int n2);

int main()
{
    int num1 =10, num2=7;
    int res = addtwoNumbers(num1,num2); // calling
    printf("Res = %d\n",res);
    int resSecond = addtwoNumbers(2,4);// calling
    printf("Res Second = %d",resSecond);
    return 0;
}

int addtwoNumbers(int n1,int n2)
{
    /*
    int sum;
    sum = n1 + n2;
    return sum;*/

    return n1 + n2;
}
