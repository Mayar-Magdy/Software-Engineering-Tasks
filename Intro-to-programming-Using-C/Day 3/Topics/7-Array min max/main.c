#include <stdio.h>

int main()
{
    int a[1000],n,min,max;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]); // 9 8 4 25 6
    }
    min = max = a[0]; // 9
    for(int i=1; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];//4
        }
        if(max < a[i])
        {
            max = a[i];//25
        }
    }
    printf("Min = %d\n",min);
    printf("Max = %d",max);
    return 0;
}
