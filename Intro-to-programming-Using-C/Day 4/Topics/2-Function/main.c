#include <stdio.h>
//https://winlibs.com/
// C paste zip file
// code blocks - settings compiler , debugger
// 1-no argument  and no return value
void checkPrime();
int main() // main function - entry point
{
    checkPrime();
    return 0;
}
void checkPrime()
{
    int num,flag=0;
    printf("Enter a positive number : ");
    scanf("%d",&num);

    for(int i=2; i<=num/2; i++) //7
    {
        if(num%i==0)
        {
            flag=1;
        }
        else
        {
            printf("Number is prime %d",num);
        }
    }
}
