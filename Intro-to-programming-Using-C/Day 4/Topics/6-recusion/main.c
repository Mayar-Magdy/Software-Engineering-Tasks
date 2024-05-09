#include <stdio.h>
long int factorial(int n);
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld",n,factorial(n));
    return 0;
}
long int factorial(int n) //2
{
    if(n>=1)
        return n*factorial(n-1);
        // 5*fact(4)
        //5 * 4* fact(3)
        //5*4*3*fact(2)
        //5*4*3*2*fact(1)
        //5*4*3*2*1*fact(0)
    else
        return 1;
}
