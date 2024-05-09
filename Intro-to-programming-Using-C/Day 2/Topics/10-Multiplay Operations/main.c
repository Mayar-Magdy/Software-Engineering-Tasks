#include <stdio.h>

int main()
{
    int num;

    for(num=1; num<=12; num++)
    {
        for(int counter=1; counter<=12; counter++ )
            {
                printf("%d * %d = %d  \n", num,counter, counter*num );
            }
    }

    return 0;
}
