#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d", &n);  //n=4
    for(int i=1; i<=12; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        // n=4 * i=1 = 4
        // n=4 * i=2 = 8
        // n=4 * i=3 = 12


        // n=4 * i=12
    }
    return 0;
}
