#include <stdio.h>

int main()
{
    /*
    int var =5;
    printf("%d\n",var);
    printf("Address : %p",&var);*/
    /*
    // pointer dataType * pc
    int* pc;
    int c = 5;
    pc = &c;
    printf("%d \n",c);
    printf("%d \n",*pc); // *pc = value c
    printf("%p \n",pc); // address variable c
    printf("%p",&pc); // address pointer memory
    */
    /*
    int* pc ,c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d \n",c);
    printf("%d",*pc);
    */

    int* pc, c;
    c= 22;
    printf("address C : %p\n",&c);
    printf("Value C : %d \n",c);
    printf("\n\n");

    // assign pointer to value
    pc = &c;
    printf("address pointer : %p\n",pc);
    printf("content pointer pc : %d\n",*pc);
    printf("\n\n");

    // change value variable
    c= 11;
    printf("address pointer : %p\n",pc);
    printf("content pointer pc : %d\n",*pc);
    printf("\n\n");

    // change value var by pointer
    *pc = 2;
    printf("address C : %p\n",&c);
    printf("Value C : %d\n",c);
    printf("\n\n");



    return 0;
}
