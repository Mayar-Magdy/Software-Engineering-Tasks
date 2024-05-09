#include <stdio.h>
//array with loop
int main()
{
    int inputArray[100]; // fixed type
    int elementCount, count=0;

    printf("Enter number of element : ");
    scanf("%d",&elementCount);

    printf("Enter %d Numbers : ",elementCount);//5

    for(int i=0; i<elementCount;i++)//i=0,1,2,3,4
    {
        scanf("%d",&inputArray[i]); // 10,3,2,2,3
    }
    printf("\n\n\n");
    for(int i=0; i<elementCount; i++)//2
    {
        for(int j=i+1; j<elementCount; j++)//2
        {
            if(inputArray[i]==inputArray[j]) //2==2
            {
                printf("%d \n",inputArray[i]);
                count++;
                break;
            }
        }
    }
    printf("Duplicate element count = %d",count);

    return 0;
}
