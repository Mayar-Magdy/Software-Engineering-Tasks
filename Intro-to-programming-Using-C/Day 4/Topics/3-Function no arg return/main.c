#include <stdio.h>
//2-no argument return value
int checkPrime();
int main()
{
    int num, flag=0;
    num = checkPrime();
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        printf("Number is not prime %d ",num);
    }
    else
    {
        printf("Number is prime %d ",num);
    }
    return 0;
}
int checkPrime()
{
    int i;
    printf("Enter Positive Number : ");
    scanf("%d",&i);
    return i;
}
