#include <stdio.h>
int power(int base,int powerNumber);
int main()
{
    int base = 2, a = 3;
    int result = power(base,a);
    printf("%d",result);
    return 0;
}
int power(int base,int powerNumber) // 2 ^ 3
{
    if(powerNumber!=0)
        return (base*power(base, powerNumber-1));
        // 2 * power(2,2)
        // 2 * 2 * power (2,1)
        // 2 *2* 2 * power(2,0)
    else
        return 1;
}
