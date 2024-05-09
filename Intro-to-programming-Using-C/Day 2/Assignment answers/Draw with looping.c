#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row ;
   printf("Enter The number of rows :");
   scanf(" %d",&row);
   for(int i=0; i<row;++i){
    for(int j=0;j<=i;++j)
    {
     printf("*");

    }
         printf("\n");

   }

    return 0;
}