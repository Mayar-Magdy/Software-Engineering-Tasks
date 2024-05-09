#include <stdio.h>

int main()
{
    int sal1, sal2, sal3, total;
    printf("Enter First Salary : ");
    scanf("%d",&sal1);
    printf("Enter Second Salary : ");
    scanf("%d",&sal2);
    printf("Enter Third Salary : ");
    scanf("%d",&sal3);

    total = sal1+sal2+sal3;
    printf("%d",total);
    return 0;
}
