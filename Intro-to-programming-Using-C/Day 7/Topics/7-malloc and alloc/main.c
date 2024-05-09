#include <stdio.h>

int main()
{
    int *ptr, *ptr1;
    int n = 5;
    printf("Enter Number of elements %d\n",n);
    ptr = (int*)malloc( n * sizeof(int));
    ptr1 = (int*)calloc(n, sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("memory allocated malloc\n");
        for(int i=0; i<n; i++)
        {
            ptr[i] = i+1;
        }
        for(int i=0; i<n; i++)
        {
            printf("%d , ",ptr[i]);
        }
        printf("\n");

        free(ptr);
        printf("malloc memory done\n");

        printf("memory allocated calloc\n");
        free(ptr1);
        printf("calloc memory done\n");
    }
    return 0;
}
