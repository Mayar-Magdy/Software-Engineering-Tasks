#include <stdio.h>

int main()
{
    /*
    int x[6],sum=0;
    printf("Enter 6 numbers : ");
    for(int i=0; i<6;i++)
    {
        //scanf("%d",&x[i]);
        scanf("%d",x+i);

        //sum+=x[i];
        sum+= *(x+i);
    }
    printf("Sum = %d",sum);
    */
    int x[5] = {1,2,3,4,5};
    int *ptr;
    ptr = &x[2];

    printf("*ptr = %d\n",*ptr);
    printf("*(ptr+2)= %d\n",*(ptr+2));
    printf("*(ptr-1) = %d\n", *(ptr-1));
    printf("*ptr = %d\n",*ptr);
    return 0;
}
