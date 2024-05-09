#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter Numbers : ");
    scanf("%d %d",&num1,&num2);

    if(num1==num2)
    {
        printf("num1 = num2");
    }
    else if(num1>num2)
    {
        printf("num1 > num2");
    }
    else if(num1 < num2)
    {
        printf("num1 < num2");
    }
    else
    {
        printf("Error");
    }


    return 0;
}
