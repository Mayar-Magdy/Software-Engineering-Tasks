#include <stdio.h>
//3-argument passed but no return value
void checkPrime(int n);
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    checkPrime(n);
    return 0;
}

void checkPrime(int n)
{
    int flag=0;
    for (int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("Number is not prime %d",n);
    else
        printf("Number is prime %d",n);

}
