#include <stdio.h>
int main()
{

    // post ++ --
    int x=10 , a;
    a = x++; // a = x , x = x+1

    printf("%d \n",a); // 10
    printf("%d \n",x); // 11


    /*
    // pre ++ --
    int x=10 , a;
    a = ++x; // x = x+1 , a = x
    printf("%d \n",a); // 11
    printf("%d \n",x); // 11*/

    return 0;
}
