#include <stdio.h>

int main()
{
    int sal[5];
    int total;

    printf("Enter Salary : ");
    scanf("%d",&sal[0]); // 100
    printf("Enter Salary : ");
    scanf("%d",&sal[1]);
    printf("Enter Salary : ");
    scanf("%d",&sal[2]);
    printf("Enter Salary : ");
    scanf("%d",&sal[3]);
    printf("Enter Salary : ");
    scanf("%d",&sal[4]);

    sal[0]= 0;//0
    total = sal[0]+sal[1]+sal[2]+sal[3]+sal[4];
    printf("Total = %d",total);
    return 0;
}
