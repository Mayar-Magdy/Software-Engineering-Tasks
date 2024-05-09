#include <stdio.h>

int main()
{
    int sizeOfArray;
    int total = 0;
    printf("Enter Size Of Array : ");
    scanf("%d",&sizeOfArray);

    int sal[sizeOfArray];

    for(int i=0; i<sizeOfArray;i++)
    {
        printf("Enter Salary %d\n",i+1); // Enter Salary 1
        scanf("%d",&sal[i]);
    }

    for(int i=0; i<sizeOfArray;i++)
    {
        total+=sal[i]; // total = total + sal[i]
        printf("Salary %d\n",sal[i]);
    }

    printf("Total = %d",total);

    return 0;
}
