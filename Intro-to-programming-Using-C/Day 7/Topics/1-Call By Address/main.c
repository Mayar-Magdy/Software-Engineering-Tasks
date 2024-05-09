#include <stdio.h>
int sum (int *num1, int* num2);
int main()
{
    int n1=8, n2=9, sumRes;
    sumRes = sum(&n1,&n2);
    printf("Sum Result : %d",sumRes);
    return 0;
}
int sum (int *num1, int* num2)
{
    int sum;
    sum = *num1 + *num2;
    return sum;
}
