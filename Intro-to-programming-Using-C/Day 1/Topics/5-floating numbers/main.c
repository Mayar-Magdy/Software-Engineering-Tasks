#include <stdio.h>

int main()
{
    double x, y ,  multiplayTwo;
    printf("Enter First Number : ");
    scanf("%lf",&x);
    printf("Enter Second Number : ");
    scanf("%lf",&y);

    multiplayTwo = x * y;
    printf("Result = %.3lf",multiplayTwo);
    return 0;
}
