#include <stdio.h>

int main()
{
    int y;
    int *pointer1 = &y;
    int **pointer2 = &pointer1;
    y= 6;
    // value of y
    printf("Value of y : %d \n",y);
    printf("Value of y : %d\n",*pointer1);
    printf("Value of y : %d\n",**pointer2);
    // address y
    printf("Address of y = %p \n",&y);
    printf("Address of y = %p \n",pointer1);
    printf("Address of y = %p \n",*pointer2);
    printf("Address of y = %p \n", *(&pointer1) );

    // address pointer 1
    printf("address of pointer 1 : %p\n",&pointer1);
    printf("address of pointer 1 : %p\n",pointer2);

    //
    printf("address of pointer 2 : %p",&pointer2);

    return 0;
}
