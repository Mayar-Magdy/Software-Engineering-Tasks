#include <stdio.h>
// <  >   <=   >=   ==    !=
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);

    if(num<0)  // 1 < 2
    {
        printf("This number Negative %d",num);
    }

    else if(num == 0) // 5 == 5, 6 == 5
    {
        printf("Number = 0");
    }

    else // not write condition
    {
        printf("This number Positive %d",num);
    }
    return 0;
}
