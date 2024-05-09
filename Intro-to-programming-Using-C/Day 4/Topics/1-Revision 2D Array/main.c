#include <stdio.h>

int main()
{
    int row,col;
    printf("Enter Number Of Rows and Cols : ");
    scanf("%d %d",&row,&col);
    float arr[row][col]; // row , col

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            printf("Enter Degree for [%d][%d] : ",r,c);
            scanf("%f",&arr[r][c]);
        }
    }

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            printf("%0.2f \t", (arr[r][c])/250*100);
        }
        printf("\n");
    }
    return 0;
}
