#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c;
printf("Enter Three numbers :");
scanf("%d%d%d", &a,&b,&c);
if(a>=b && a>=c)
    printf("The Largest is %d", a);
else if(b>=a && b>=c)
    printf("The Largest is %d", b);
else
    printf("The Largest is %d", c);

    return 0;
}