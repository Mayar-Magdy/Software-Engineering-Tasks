#include <stdio.h>

struct distance
{
    int feet;
    float inch;
}distance1,distance2,sum;


int main()
{
    printf("Enter Feet of distance 1 : ");
    scanf("%d",&distance1.feet);
    printf("Enter Inch of distance 1 : ");
    scanf("%f",&distance1.inch);

    printf("\n\n");

    printf("Enter Feet of distance 2 : ");
    scanf("%d",&distance2.feet);
    printf("Enter Inch of distance 2 : ");
    scanf("%f",&distance2.inch);


    sum.feet = distance1.feet + distance2.feet;
    sum.inch = distance1.inch + distance2.inch;

    printf("Sum of Feet = %d\n",sum.feet);
    printf("Sum of Inch = %.2f",sum.inch);
    return 0;
}
