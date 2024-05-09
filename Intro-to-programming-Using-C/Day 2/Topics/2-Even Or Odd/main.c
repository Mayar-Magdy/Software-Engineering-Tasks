#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);

    if(num%2==0) // true = 1, false =0
    {
        printf("This Number is Even");
    }
    else if(num == 0)
    {
        prinf("number = 0");
    }
    else
    {
        printf("This Number is Odd");
    }
    return 0;
}
