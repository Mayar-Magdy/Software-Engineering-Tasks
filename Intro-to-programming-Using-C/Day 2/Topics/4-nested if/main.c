#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Numbers : ");
    scanf("%d %d",&num1,&num2);
    if(num1 >= num2)
    {
        printf("test\n");
        if(num1 == num2) // nested if
        {
            printf("%d equal %d",num1, num2);
        }
        else
        {
            printf("%d > %d",num1, num2);
        }
    }
    else
    {
        printf("%d < %d",num1, num2);
    }
    return 0;
}
