#include <stdio.h>

int main()
{
    /*
    int ar[4] = {1,2,3,4};

    int a[2][3] =
    {
        {2,4,6},
        {4,6,7}
    };

    int b[][3] = // row = 3
    {
        {2,5,7},
        {1,2,3},
        {8,9,2},
    };

    int c [2][3] = {1,2,3,4}; // 1,2,3,4,0,0

    int arr[4][3];
    for(int row=0; row<4;row++)
    {
        for(int col=0 ; col<3;col++)
        {
            printf("Enter Arr[%d][%d]",row,col);
            scanf("%d",&arr[row][col]);
        }
    }
    for(int row=0; row<4;row++)
    {
        for(int col=0 ; col<3;col++)
        {
            printf("%d \t",arr[row][col]);
        }
        printf("\n");
    }
    */

    int sumEven =0 , sumOdd=0;

    int valueRow, valueCol;
    printf("Enter Row and Col : ");
    scanf("%d %d", &valueRow, &valueCol);

    int newArr[valueRow][valueCol];

    for(int row=0; row<valueRow;row++)
    {
        for(int col=0; col < valueCol; col++)
        {
            printf("Enter Value for [%d][%d] : ",row,col);
            scanf("%d",&newArr[row][col]);
        }
    }

    for(int row=0; row<valueRow;row++)
    {
        for(int col=0; col < valueCol; col++)
        {
            if( (newArr[row][col]%2) == 0 )
            {
                sumEven+= newArr[row][col];
            }
            else
            {
                sumOdd+= newArr[row][col];
            }
        }
    }
    printf("Even Sum = %d\n",sumEven);
    printf("Odd Sum = %d\n",sumOdd);

    return 0;
}
