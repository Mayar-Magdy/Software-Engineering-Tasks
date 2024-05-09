#include <stdio.h>
int main()
{
    int num,counter, sum=0;
    printf("Enter positive number : ");
    scanf("%d",&num);
    /*  // scope
    int z = 200;
    {
        int i = 10;
    }*/
    for(counter=1; counter<= num; counter++)// scope
    {
        sum = sum + counter;
    }
    printf("sum = %d\n",sum);
    printf("counter = %d\n",counter);

    return 0;
}
