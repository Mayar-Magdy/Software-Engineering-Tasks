#include <stdio.h>
int main()
{
    int num;
    float arr[5], sum=0.0, avg;
    printf("Enter Number for element : ");
    scanf("%d",&num);

    while(num>100 || num<1)
    {
        printf("Enter Number Again : ");
        scanf("%d",&num);
    }


    for(int i=0; i<num;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%f",&arr[i]);
        sum+= arr[i];
    }

    avg = sum / num;
    printf("Average = %f ",avg);
    return 0;
}
