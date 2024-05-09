#include <stdio.h>
#include <math.h>

int main()
{
    /*
    float num,root;
    printf("Enter Number : ");
    scanf("%f",&num);
    root = sqrt(num);
    printf("Square root of %.2f = %.2f",num,root);
    */
    double base,power,result;
    printf("Enter base number : ");
    scanf("%lf",&base);
    printf("Enter power number : ");
    scanf("%lf",&power);
    //calling function
    result = pow(base,power);
    printf("%.1lf ^ %.1lf = %.2lf",base , power, result);
    return 0;
}
