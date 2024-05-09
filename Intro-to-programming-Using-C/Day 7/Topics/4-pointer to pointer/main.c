#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;

    printf("address of x = %p\n",&x);
    printf("address of x = %p\n",ptr1);
    printf("address of x = %p\n",*ptr2);
    printf("\n\n\n");

    printf("Value of x = %d\n",x);
    printf("Value of x = %d\n",*ptr1);
    printf("Value of x = %d\n",**ptr2);
    printf("\n\n\n");

    printf("address value of ptr1 = %p\n",&ptr1);
    printf("address of ptr1 = %p\n",ptr2);
    printf("address of x = %p\n",*ptr2);
    return 0;
}
