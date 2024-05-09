#include <stdio.h>

int main()
{
    /*
    for(int i=100; i>=100 ; i=i+2 ) // infinite loop, for(;;)
    {
        printf("%d \n",i);
    }*/
    int i;
    printf("Enter Start Number positive : ");
    scanf("%d",&i);
    for(i; i>0 ; i=i-2)// for(condition i>0 && z < 10)
    {
        printf("%d\n",i);
    }
    return 0;
}
